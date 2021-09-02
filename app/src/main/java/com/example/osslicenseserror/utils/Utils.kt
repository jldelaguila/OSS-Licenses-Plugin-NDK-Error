package com.example.osslicenseserror.utils

class Utils {

    companion object {
        init {
            System.loadLibrary("utils")
        }
    }

    external fun performSomeAction(): String
}