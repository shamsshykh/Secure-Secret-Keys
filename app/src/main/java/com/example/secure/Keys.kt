package com.example.secure

object Keys {

    init {
        System.loadLibrary("native-lib")
    }



    external fun apiKey(): String

    external fun baseUrl(): String

}