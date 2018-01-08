/* -*- Mode: C++; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* vim: set ts=8 sts=2 et sw=2 tw=80: */
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef mozilla_dom_workers_principal_h__
#define mozilla_dom_workers_principal_h__

#include "jsapi.h"
#include "mozilla/Assertions.h"

namespace mozilla { namespace dom { namespace workers {

struct WorkerPrincipal final : public JSPrincipals
{
  bool write(JSContext* aCx, JSStructuredCloneWriter* aWriter) override {
    MOZ_CRASH("WorkerPrincipal::write not implemented");
    return false;
  }

  // Random unique constant to facilitate JSPrincipal debugging
  static const uint32_t DEBUG_TOKEN = 0x7e2df9d2;
};

JSPrincipals*
GetWorkerPrincipal();

void
DestroyWorkerPrincipals(JSPrincipals* aPrincipals);

} /* namespace workers */ } /* namespace dom */ } /* namespace mozilla */

#endif /* mozilla_dom_workers_principal_h__ */
