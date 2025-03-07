const { DataSource } = require("typeorm");

require("reflect-metadata");



const AppDataSource = new DataSource({
    type:"mysql",
    host:"localhost",
    port:"3306",
    username:"sa",
    password:"123456",
    database:"prueba",
    entities:[Product],
})

module.exports = {AppDataSource}