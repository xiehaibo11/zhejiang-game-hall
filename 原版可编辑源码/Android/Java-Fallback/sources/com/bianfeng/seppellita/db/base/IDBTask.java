package com.bianfeng.seppellita.db.base;

public interface IDBTask {
    int delete(java.lang.String r1) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException;

    int deleteBeforeData(java.lang.String r1) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException;

    java.lang.Long insert(java.lang.String r1, long r2, java.lang.String r4) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException;

    java.util.List<java.lang.String> select() throws com.bianfeng.ymnsdk.utilslib.exception.YmnException;

    java.util.List<java.lang.String> select(java.lang.String r1, java.lang.String r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException;
}
