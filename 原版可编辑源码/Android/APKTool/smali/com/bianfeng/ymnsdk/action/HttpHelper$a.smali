.class Lcom/bianfeng/ymnsdk/action/HttpHelper$a;
.super Ljava/lang/Object;
.source "HttpHelper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/bianfeng/ymnsdk/action/HttpListener;

.field final synthetic d:Lcom/bianfeng/ymnsdk/action/HttpHelper;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/action/HttpListener;)V
    .locals 0
    .param p1, "this$0"    # Lcom/bianfeng/ymnsdk/action/HttpHelper;

    .line 74
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->d:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 13

    .line 78
    const-string v0, "GET"

    const-string v1, "="

    const/4 v2, 0x0

    .line 79
    .local v2, "url":Ljava/net/URL;
    const/4 v3, 0x0

    .line 80
    .local v3, "connection":Ljava/net/HttpURLConnection;
    const/4 v4, 0x0

    .line 81
    .local v4, "outputStream":Ljava/io/DataOutputStream;
    const/4 v5, 0x0

    .line 84
    .local v5, "inputStream":Ljava/io/InputStream;
    :try_start_0
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->d:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->access$000(Lcom/bianfeng/ymnsdk/action/HttpHelper;)Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v6, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v6

    const/4 v7, 0x0

    if-eqz v6, :cond_4

    .line 85
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->a:Ljava/lang/String;

    if-nez v6, :cond_0

    .line 86
    new-instance v1, Ljava/net/URL;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->b:Ljava/lang/String;

    invoke-direct {v1, v6}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    move-object v2, v1

    .end local v2    # "url":Ljava/net/URL;
    .local v1, "url":Ljava/net/URL;
    goto/16 :goto_2

    .line 88
    .end local v1    # "url":Ljava/net/URL;
    .restart local v2    # "url":Ljava/net/URL;
    :cond_0
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->a:Ljava/lang/String;

    invoke-virtual {v6}, Ljava/lang/String;->isEmpty()Z

    move-result v6

    if-nez v6, :cond_3

    .line 89
    new-instance v6, Lcom/google/gson/Gson;

    invoke-direct {v6}, Lcom/google/gson/Gson;-><init>()V

    iget-object v8, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->a:Ljava/lang/String;

    invoke-static {v8}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    new-instance v9, Lcom/bianfeng/ymnsdk/action/HttpHelper$a$a;

    invoke-direct {v9, p0}, Lcom/bianfeng/ymnsdk/action/HttpHelper$a$a;-><init>(Lcom/bianfeng/ymnsdk/action/HttpHelper$a;)V

    invoke-virtual {v9}, Lcom/google/gson/reflect/TypeToken;->getType()Ljava/lang/reflect/Type;

    move-result-object v9

    invoke-virtual {v6, v8, v9}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v6

    check-cast v6, Ljava/util/Map;

    .line 91
    .local v6, "infoMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    const-string v8, "?"

    .line 92
    .local v8, "appendString":Ljava/lang/String;
    invoke-interface {v6}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v9

    invoke-interface {v9}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v9

    :goto_0
    invoke-interface {v9}, Ljava/util/Iterator;->hasNext()Z

    move-result v10

    if-eqz v10, :cond_2

    invoke-interface {v9}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v10

    .line 93
    .local v10, "key":Ljava/lang/Object;
    invoke-virtual {v8, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v11

    if-eqz v11, :cond_1

    .line 94
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v12, "&"

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-interface {v6, v12}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    move-object v8, v11

    goto :goto_1

    .line 96
    :cond_1
    new-instance v11, Ljava/lang/StringBuilder;

    invoke-direct {v11}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v11, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v10}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-interface {v6, v12}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v12

    invoke-virtual {v12}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    invoke-virtual {v11, v12}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v11}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v11

    move-object v8, v11

    .line 98
    .end local v10    # "key":Ljava/lang/Object;
    :goto_1
    goto :goto_0

    .line 99
    :cond_2
    new-instance v1, Ljava/net/URL;

    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v10, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->b:Ljava/lang/String;

    invoke-virtual {v9, v10}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v9

    invoke-direct {v1, v9}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 100
    .end local v2    # "url":Ljava/net/URL;
    .end local v6    # "infoMap":Ljava/util/Map;, "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;"
    .end local v8    # "appendString":Ljava/lang/String;
    .restart local v1    # "url":Ljava/net/URL;
    move-object v2, v1

    goto :goto_2

    .line 101
    .end local v1    # "url":Ljava/net/URL;
    .restart local v2    # "url":Ljava/net/URL;
    :cond_3
    new-instance v1, Ljava/net/URL;

    iget-object v6, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->b:Ljava/lang/String;

    invoke-direct {v1, v6}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    move-object v2, v1

    .line 104
    :goto_2
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    move-object v3, v1

    .line 105
    invoke-virtual {v3, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 106
    const/16 v0, 0x2710

    invoke-virtual {v3, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    goto/16 :goto_7

    .line 108
    :cond_4
    new-instance v0, Ljava/net/URL;

    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->b:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    move-object v2, v0

    .line 110
    invoke-virtual {v2}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;

    move-object v3, v0

    .line 111
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->d:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->access$100(Lcom/bianfeng/ymnsdk/action/HttpHelper;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 112
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->d:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->access$100(Lcom/bianfeng/ymnsdk/action/HttpHelper;)Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, v2}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v0

    move-object v3, v0

    .line 114
    :cond_5
    const/16 v0, 0x61a8

    invoke-virtual {v3, v0}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 115
    const/16 v0, 0x3a98

    invoke-virtual {v3, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 116
    invoke-virtual {v3, v7}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    .line 117
    const-string v0, "Content-Type"

    const-string v1, "application/json;charset=UTF-8"

    invoke-virtual {v3, v0, v1}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 118
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->d:Lcom/bianfeng/ymnsdk/action/HttpHelper;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/action/HttpHelper;->access$000(Lcom/bianfeng/ymnsdk/action/HttpHelper;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "POST"

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_6

    .line 119
    const/4 v0, 0x1

    invoke-virtual {v3, v0}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 120
    invoke-virtual {v3, v0}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 123
    :cond_6
    invoke-virtual {v2}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v0, :cond_a

    .line 156
    if-eqz v3, :cond_7

    .line 157
    :try_start_1
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_3

    .line 165
    :catch_0
    move-exception v0

    goto :goto_4

    .line 159
    :cond_7
    :goto_3
    if-eqz v4, :cond_8

    .line 160
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->close()V

    .line 162
    :cond_8
    if-eqz v5, :cond_9

    .line 163
    invoke-virtual {v5}, Ljava/io/InputStream;->close()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_5

    .line 166
    .local v0, "e":Ljava/lang/Exception;
    :goto_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_6

    .line 167
    .end local v0    # "e":Ljava/lang/Exception;
    :cond_9
    :goto_5
    nop

    .line 124
    :goto_6
    return-void

    .line 126
    :cond_a
    :try_start_2
    new-instance v0, Ljava/io/DataOutputStream;

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    move-object v4, v0

    .line 127
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->a:Ljava/lang/String;

    invoke-static {v0}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "UTF-8"

    invoke-virtual {v0, v1}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v0

    invoke-virtual {v4, v0}, Ljava/io/DataOutputStream;->write([B)V

    .line 129
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->flush()V

    .line 130
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->close()V

    .line 134
    :goto_7
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v0

    const/16 v1, 0xc8

    if-ne v0, v1, :cond_c

    .line 135
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    move-object v5, v0

    .line 136
    const/4 v0, 0x0

    .line 137
    .local v0, "len":I
    const/high16 v1, 0x100000

    new-array v1, v1, [B

    .line 138
    .local v1, "buf":[B
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    .line 139
    .local v6, "jsonBuilder":Ljava/lang/StringBuilder;
    :goto_8
    invoke-virtual {v5, v1}, Ljava/io/InputStream;->read([B)I

    move-result v8

    move v0, v8

    const/4 v9, -0x1

    if-eq v8, v9, :cond_b

    .line 140
    new-instance v8, Ljava/lang/String;

    invoke-direct {v8, v1, v7, v0}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v6, v8}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_8

    .line 142
    :cond_b
    invoke-virtual {v5}, Ljava/io/InputStream;->close()V

    .line 143
    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v7

    .line 145
    .local v7, "infoStr":Ljava/lang/String;
    invoke-static {}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->getInstance()Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;

    move-result-object v8

    invoke-virtual {v8, v7}, Lcom/bianfeng/ymnsdk/util/security/SecurityUtil;->urlDecoder(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    move-object v7, v8

    .line 147
    iget-object v8, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-interface {v8, v7}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onComplete(Ljava/lang/String;)V

    .line 148
    .end local v0    # "len":I
    .end local v1    # "buf":[B
    .end local v6    # "jsonBuilder":Ljava/lang/StringBuilder;
    .end local v7    # "infoStr":Ljava/lang/String;
    goto :goto_9

    .line 149
    :cond_c
    iget-object v0, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v1

    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->getResponseMessage()Ljava/lang/String;

    move-result-object v6

    invoke-interface {v0, v1, v6}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onError(ILjava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    .line 156
    :goto_9
    if-eqz v3, :cond_d

    .line 157
    :try_start_3
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_a

    .line 165
    :catch_1
    move-exception v0

    goto :goto_b

    .line 159
    :cond_d
    :goto_a
    if-eqz v4, :cond_e

    .line 160
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->close()V

    .line 162
    :cond_e
    if-eqz v5, :cond_f

    .line 163
    invoke-virtual {v5}, Ljava/io/InputStream;->close()V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1

    goto :goto_c

    .line 166
    .local v0, "e":Ljava/lang/Exception;
    :goto_b
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 168
    .end local v0    # "e":Ljava/lang/Exception;
    goto :goto_d

    .line 167
    :cond_f
    :goto_c
    goto :goto_d

    .line 155
    :catchall_0
    move-exception v0

    goto :goto_e

    .line 151
    :catch_2
    move-exception v0

    .line 152
    .restart local v0    # "e":Ljava/lang/Exception;
    :try_start_4
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 153
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/action/HttpHelper$a;->c:Lcom/bianfeng/ymnsdk/action/HttpListener;

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v6

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-interface {v1, v6, v7}, Lcom/bianfeng/ymnsdk/action/HttpListener;->onError(ILjava/lang/String;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_0

    .line 156
    .end local v0    # "e":Ljava/lang/Exception;
    if-eqz v3, :cond_10

    .line 157
    :try_start_5
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 159
    :cond_10
    if-eqz v4, :cond_11

    .line 160
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->close()V

    .line 162
    :cond_11
    if-eqz v5, :cond_f

    .line 163
    invoke-virtual {v5}, Ljava/io/InputStream;->close()V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_1

    goto :goto_c

    .line 169
    :goto_d
    return-void

    .line 156
    :goto_e
    if-eqz v3, :cond_12

    .line 157
    :try_start_6
    invoke-virtual {v3}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_f

    .line 165
    :catch_3
    move-exception v1

    goto :goto_10

    .line 159
    :cond_12
    :goto_f
    if-eqz v4, :cond_13

    .line 160
    invoke-virtual {v4}, Ljava/io/DataOutputStream;->close()V

    .line 162
    :cond_13
    if-eqz v5, :cond_14

    .line 163
    invoke-virtual {v5}, Ljava/io/InputStream;->close()V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_3

    goto :goto_11

    .line 166
    .local v1, "e":Ljava/lang/Exception;
    :goto_10
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_12

    .line 167
    .end local v1    # "e":Ljava/lang/Exception;
    :cond_14
    :goto_11
    nop

    .line 168
    :goto_12
    throw v0
.end method
