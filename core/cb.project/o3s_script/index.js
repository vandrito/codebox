var path = require("path");

module.exports = {
    id: "o3s_script",
    name: "O3S Script",
    
    sample: path.resolve(__dirname, "sample"),
    detector: path.resolve(__dirname, "detector.sh"),
    runner: [
        {
            id: "all",
            type: "build",
            script: path.resolve(__dirname, "build_all.sh")
        },
        {
            id: "clean",
            type: "clean",
            script: path.resolve(__dirname, "build_clean.sh")
        }
    ]
};