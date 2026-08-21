package com.bianfeng.seppellita.db.base;

import com.bianfeng.ymnsdk.utilslib.exception.YmnException;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public interface IDBTask {
    int delete(String str) throws YmnException;

    int deleteBeforeData(String str) throws YmnException;

    Long insert(String str, long j, String str2) throws YmnException;

    List<String> select() throws YmnException;

    List<String> select(String str, String str2) throws YmnException;
}
