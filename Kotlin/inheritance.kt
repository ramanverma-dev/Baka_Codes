fun main(args: Array<String>) {
    val bowser = Animal("Bowser",20.0, 13.5)
    bowser.getInfo()
    val shadow = Dog("Shadow", 20.0, 16.4, "No one")
    shadow.getInfo()
}

open class Animal(val name: String,
                  var height: Double,
                  var weight: Double) {
        init{
            val regex = Regex(".*\\d+.*")
            require(!name.matches(regex)){"Animal name cannot contain numbers."}
            
            require(height>0){"Height must be greater than zero"}
            require(weight>0){"Weight must be greater than zero"}
        }

        open fun getInfo(): Unit
        {
            println("$name is $height tall and weighs $weight")
        }
} 

class Dog(name: String,
          height: Double,
          weight: Double,
          var owner: String): Animal(name, height, weight){

              override fun getInfo(): Unit{
                  println("$name is $height tall, weighs $weight and is owned by $owner")
              }
          }