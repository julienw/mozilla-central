if (!('oomTest' in this))
   quit();

loadFile(`
function parseAndEvaluate(source) {
    let m = parseModule(source);
    instantiateModule(m);
}
parseAndEvaluate("async function a() { await 2 + 3; }")
`);
function loadFile(lfVarx) {
    oomTest(function() {
        eval(lfVarx);
    });
}
