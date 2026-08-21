package com.czhj.volley;

public class TimeoutError extends VolleyError {
    @Override
    public String getMessage() {
        return "TimeOut Error";
    }
}
