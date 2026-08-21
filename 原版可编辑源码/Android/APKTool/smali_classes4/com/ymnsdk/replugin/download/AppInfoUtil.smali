.class public Lcom/ymnsdk/replugin/download/AppInfoUtil;
.super Ljava/lang/Object;
.source "AppInfoUtil.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getString(Ljava/io/InputStream;)Ljava/lang/String;
    .locals 3

    .line 32
    :try_start_0
    new-instance v0, Ljava/io/InputStreamReader;

    const-string v1, "UTF-8"

    invoke-direct {v0, p0, v1}, Ljava/io/InputStreamReader;-><init>(Ljava/io/InputStream;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/UnsupportedEncodingException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 34
    invoke-virtual {v0}, Ljava/io/UnsupportedEncodingException;->printStackTrace()V

    const/4 v0, 0x0

    .line 36
    :goto_0
    new-instance v1, Ljava/io/BufferedReader;

    invoke-direct {v1, v0}, Ljava/io/BufferedReader;-><init>(Ljava/io/Reader;)V

    .line 37
    new-instance v0, Ljava/lang/StringBuffer;

    const-string v2, ""

    invoke-direct {v0, v2}, Ljava/lang/StringBuffer;-><init>(Ljava/lang/String;)V

    .line 40
    :goto_1
    :try_start_1
    invoke-virtual {v1}, Ljava/io/BufferedReader;->readLine()Ljava/lang/String;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 41
    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v2, "\n"

    .line 42
    invoke-virtual {v0, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_1

    .line 44
    :cond_0
    invoke-virtual {p0}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception p0

    .line 46
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    .line 48
    :goto_2
    invoke-virtual {v0}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static readAppInfo(Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 16
    new-instance v0, Ljava/io/File;

    invoke-direct {v0, p0}, Ljava/io/File;-><init>(Ljava/lang/String;)V

    .line 17
    invoke-virtual {v0}, Ljava/io/File;->exists()Z

    move-result p0

    const-string v1, ""

    if-nez p0, :cond_0

    return-object v1

    .line 19
    :cond_0
    :try_start_0
    new-instance p0, Ljava/io/FileInputStream;

    invoke-direct {p0, v0}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    .line 20
    invoke-static {p0}, Lcom/ymnsdk/replugin/download/AppInfoUtil;->getString(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object p0

    .line 21
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p0, "md5"

    .line 22
    invoke-virtual {v0, p0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 24
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-object v1
.end method
