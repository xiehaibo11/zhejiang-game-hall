.class public final Lcom/kwad/sdk/crash/report/upload/b;
.super Ljava/lang/Object;


# direct methods
.method private static a(Lcom/kwad/sdk/crash/report/upload/f;)Ljava/util/Map;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/kwad/sdk/crash/report/upload/f;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBP:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBP:Ljava/lang/String;

    const-string v2, "uploadToken"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBM:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBM:Ljava/lang/String;

    const-string v2, "sys"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBL:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_3

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBL:Ljava/lang/String;

    const-string v2, "did"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_3
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBJ:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_4

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBJ:Ljava/lang/String;

    const-string v2, "sid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_4
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aAo:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_5

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aAo:Ljava/lang/String;

    const-string v2, "appver"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_5
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->mTaskId:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_6

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->mTaskId:Ljava/lang/String;

    const-string v2, "taskId"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_6
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBK:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_7

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBK:Ljava/lang/String;

    const-string v2, "token"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_7
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBI:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_8

    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBI:Ljava/lang/String;

    const-string v2, "uid"

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_8
    iget-object v1, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBN:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_9

    iget-object p0, p0, Lcom/kwad/sdk/crash/report/upload/f;->aBN:Ljava/lang/String;

    const-string v1, "extraInfo"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_9
    return-object v0
.end method

.method public static a(Ljava/io/File;Lcom/kwad/sdk/crash/report/upload/f;Lcom/kwad/sdk/crash/report/upload/a;)V
    .locals 2

    iget-object v0, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBL:Ljava/lang/String;

    iget-object v1, p1, Lcom/kwad/sdk/crash/report/upload/f;->aBK:Ljava/lang/String;

    invoke-static {p1}, Lcom/kwad/sdk/crash/report/upload/b;->a(Lcom/kwad/sdk/crash/report/upload/f;)Ljava/util/Map;

    move-result-object p1

    invoke-static {p0, v0, v1, p1, p2}, Lcom/kwad/sdk/crash/report/upload/b;->a(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/kwad/sdk/crash/report/upload/a;)V

    return-void
.end method

.method private static a(Ljava/io/File;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Lcom/kwad/sdk/crash/report/upload/a;)V
    .locals 16
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/io/File;",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;",
            "Lcom/kwad/sdk/crash/report/upload/a;",
            ")V"
        }
    .end annotation

    const-string v0, "\r\n"

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "uploadLogFile "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Ljava/lang/Thread;->currentThread()Ljava/lang/Thread;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "ExceptionCollector"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    new-instance v1, Lcom/kwad/sdk/core/network/c;

    invoke-direct {v1}, Lcom/kwad/sdk/core/network/c;-><init>()V

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v3

    invoke-virtual {v3}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v4

    new-instance v5, Ljava/lang/StringBuilder;

    const-string v6, "https://"

    invoke-direct {v5, v6}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a;->Bo()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v6

    const-string v7, "ulog"

    const-string v8, "ulog-sdk.gifshow.com"

    invoke-virtual {v6, v7, v8}, Lcom/kwad/sdk/core/network/idc/a;->P(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v6, "/rest/log/sdk/file/upload"

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    const/4 v6, -0x1

    const/4 v7, 0x0

    :try_start_0
    new-instance v8, Ljava/net/URL;

    invoke-direct {v8, v5}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    invoke-virtual {v8}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v8

    check-cast v8, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_4
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    const/4 v9, 0x1

    :try_start_1
    invoke-virtual {v8, v9}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    invoke-virtual {v8, v9}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    const/4 v10, 0x0

    invoke-virtual {v8, v10}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/16 v11, 0x1388

    invoke-virtual {v8, v11}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    invoke-virtual {v8, v11}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    invoke-virtual {v8, v10}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string v11, "POST"

    invoke-virtual {v8, v11}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const-string v11, "connection"

    const-string v12, "Keep-Alive"

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "User-Agent"

    invoke-static {}, Lcom/kwad/sdk/core/network/q;->getUserAgent()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "Charset"

    const-string v12, "UTF-8"

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "Content-Type"

    new-instance v12, Ljava/lang/StringBuilder;

    const-string v13, "multipart/form-data; boundary="

    invoke-direct {v12, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "Content-MD5"

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Lcom/kwad/sdk/utils/a;->fn(Ljava/lang/String;)[B

    move-result-object v12

    const/4 v13, 0x2

    invoke-static {v12, v13}, Landroid/util/Base64;->encodeToString([BI)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "file-type"

    new-instance v12, Ljava/lang/StringBuilder;

    const-string v13, "."

    invoke-direct {v12, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual/range {p0 .. p0}, Ljava/io/File;->getName()Ljava/lang/String;

    move-result-object v13

    invoke-static {v13}, Lcom/kwad/sdk/utils/q;->getExtension(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v13

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "origin-name"

    invoke-virtual {v8, v11, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v11, "Cookie"

    new-instance v12, Ljava/lang/StringBuilder;

    const-string v13, "did="

    invoke-direct {v12, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    move-object/from16 v13, p1

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v8, v11, v12}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v8}, Ljava/net/HttpURLConnection;->connect()V

    invoke-virtual {v8}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v11
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_3
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    invoke-interface/range {p3 .. p3}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v12

    invoke-interface {v12}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v12

    :goto_0
    invoke-interface {v12}, Ljava/util/Iterator;->hasNext()Z

    move-result v13

    if-eqz v13, :cond_0

    invoke-interface {v12}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v13

    check-cast v13, Ljava/lang/String;

    move-object/from16 v14, p3

    invoke-interface {v14, v13}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v15

    check-cast v15, Ljava/lang/String;

    invoke-static {v13, v15, v3}, Lcom/kwad/sdk/crash/report/upload/b;->d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)[B

    move-result-object v13

    invoke-virtual {v11, v13}, Ljava/io/OutputStream;->write([B)V

    goto :goto_0

    :cond_0
    new-instance v12, Ljava/lang/StringBuilder;

    const-string v13, "\r\n--"

    invoke-direct {v12, v13}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v12, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v13, "--\r\n"

    invoke-virtual {v12, v13}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v12}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/String;->getBytes()[B

    move-result-object v12

    new-instance v13, Ljava/lang/StringBuilder;

    invoke-direct {v13}, Ljava/lang/StringBuilder;-><init>()V

    const-string v14, "--"

    invoke-virtual {v13, v14}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v3, Ljava/lang/StringBuilder;

    const-string v14, "Content-Disposition: form-data;name=\"file\";filename=\""

    invoke-direct {v3, v14}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "\"\r\n"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "Content-Type: application/octet-stream\r\n\r\n"

    invoke-virtual {v13, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v13}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3}, Ljava/lang/String;->getBytes()[B

    move-result-object v3

    invoke-virtual {v11, v3}, Ljava/io/OutputStream;->write([B)V

    new-instance v3, Ljava/io/DataInputStream;

    new-instance v4, Ljava/io/FileInputStream;

    move-object/from16 v13, p0

    invoke-direct {v4, v13}, Ljava/io/FileInputStream;-><init>(Ljava/io/File;)V

    invoke-direct {v3, v4}, Ljava/io/DataInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    const/16 v4, 0x400

    :try_start_3
    new-array v4, v4, [B

    :goto_1
    invoke-virtual {v3, v4}, Ljava/io/DataInputStream;->read([B)I

    move-result v13

    if-eq v13, v6, :cond_1

    invoke-virtual {v11, v4, v10, v13}, Ljava/io/OutputStream;->write([BII)V

    goto :goto_1

    :cond_1
    invoke-virtual {v0}, Ljava/lang/String;->getBytes()[B

    move-result-object v0

    invoke-virtual {v11, v0}, Ljava/io/OutputStream;->write([B)V

    invoke-virtual {v11, v12}, Ljava/io/OutputStream;->write([B)V

    invoke-virtual {v11}, Ljava/io/OutputStream;->flush()V

    invoke-virtual {v8}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v0

    iput v0, v1, Lcom/kwad/sdk/core/network/c;->code:I

    iput v0, v1, Lcom/kwad/sdk/core/network/c;->aoK:I

    const/16 v4, 0xc8

    if-ne v0, v4, :cond_3

    invoke-virtual {v8}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/sdk/crash/utils/h;->a(Ljava/io/InputStream;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, v1, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    new-instance v0, Lorg/json/JSONObject;

    iget-object v4, v1, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-direct {v0, v4}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v4, "result"

    invoke-virtual {v0, v4, v6}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v0

    if-ne v0, v9, :cond_2

    invoke-interface/range {p4 .. p4}, Lcom/kwad/sdk/crash/report/upload/a;->Fk()V

    goto :goto_2

    :cond_2
    sget-object v4, Lcom/kwad/sdk/crash/report/upload/e;->aBE:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v4, Ljava/lang/StringBuilder;

    const-string v7, "result is "

    invoke-direct {v4, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-interface/range {p4 .. p4}, Lcom/kwad/sdk/crash/report/upload/a;->Fj()V
    :try_end_4
    .catch Lorg/json/JSONException; {:try_start_4 .. :try_end_4} :catch_0
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_1
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    goto :goto_2

    :catch_0
    :try_start_5
    sget-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBF:Lcom/kwad/sdk/crash/report/upload/e;

    sget-object v0, Lcom/kwad/sdk/crash/report/upload/e;->aBF:Lcom/kwad/sdk/crash/report/upload/e;

    invoke-interface/range {p4 .. p4}, Lcom/kwad/sdk/crash/report/upload/a;->Fj()V

    :goto_2
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v4, "response.body= "

    invoke-direct {v0, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, v1, Lcom/kwad/sdk/core/network/c;->aoM:Ljava/lang/String;

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_4

    :cond_3
    sget-object v2, Lcom/kwad/sdk/crash/report/upload/e;->aBD:Lcom/kwad/sdk/crash/report/upload/e;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v4, Lcom/kwad/sdk/crash/report/upload/e;->aBD:Lcom/kwad/sdk/crash/report/upload/e;

    invoke-virtual {v4}, Lcom/kwad/sdk/crash/report/upload/e;->vo()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-interface/range {p4 .. p4}, Lcom/kwad/sdk/crash/report/upload/a;->Fj()V

    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a;->Bo()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v0

    iget v2, v1, Lcom/kwad/sdk/core/network/c;->code:I

    if-nez v2, :cond_4

    move v2, v6

    goto :goto_3

    :cond_4
    iget v2, v1, Lcom/kwad/sdk/core/network/c;->code:I

    :goto_3
    invoke-virtual {v0, v5, v2, v7}, Lcom/kwad/sdk/core/network/idc/a;->a(Ljava/lang/String;ILjava/lang/Throwable;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :goto_4
    invoke-static {v8}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    :goto_5
    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v11}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    return-void

    :catchall_0
    move-exception v0

    goto :goto_6

    :catch_1
    move-exception v0

    goto :goto_7

    :catchall_1
    move-exception v0

    move-object v3, v7

    goto :goto_6

    :catch_2
    move-exception v0

    move-object v3, v7

    goto :goto_7

    :catchall_2
    move-exception v0

    move-object v3, v7

    move-object v11, v3

    :goto_6
    move-object v7, v8

    goto :goto_a

    :catch_3
    move-exception v0

    move-object v3, v7

    move-object v11, v3

    :goto_7
    move-object v7, v8

    goto :goto_8

    :catchall_3
    move-exception v0

    move-object v3, v7

    move-object v11, v3

    goto :goto_a

    :catch_4
    move-exception v0

    move-object v3, v7

    move-object v11, v3

    :goto_8
    :try_start_6
    sget-object v2, Lcom/kwad/sdk/crash/report/upload/e;->aBD:Lcom/kwad/sdk/crash/report/upload/e;

    invoke-virtual {v0}, Ljava/lang/Exception;->getCause()Ljava/lang/Throwable;

    invoke-interface/range {p4 .. p4}, Lcom/kwad/sdk/crash/report/upload/a;->Fj()V

    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a;->Bo()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v2

    iget v4, v1, Lcom/kwad/sdk/core/network/c;->code:I

    if-nez v4, :cond_5

    goto :goto_9

    :cond_5
    iget v6, v1, Lcom/kwad/sdk/core/network/c;->code:I

    :goto_9
    invoke-virtual {v2, v5, v6, v0}, Lcom/kwad/sdk/core/network/idc/a;->a(Ljava/lang/String;ILjava/lang/Throwable;)V

    invoke-static {v0}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_4

    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    goto :goto_5

    :catchall_4
    move-exception v0

    :goto_a
    invoke-static {v7}, Lcom/kwad/sdk/crash/utils/b;->a(Ljava/net/URLConnection;)V

    invoke-static {v3}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    invoke-static {v11}, Lcom/kwad/sdk/crash/utils/b;->closeQuietly(Ljava/io/Closeable;)V

    throw v0
.end method

.method private static d(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)[B
    .locals 3

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "--"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\r\n"

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "Content-Disposition: form-data; name=\""

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "\""

    invoke-virtual {v1, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    new-instance p0, Ljava/lang/StringBuilder;

    const-string v1, "Content-Length: "

    invoke-direct {p0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v1

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->getBytes()[B

    move-result-object p0

    return-object p0
.end method
