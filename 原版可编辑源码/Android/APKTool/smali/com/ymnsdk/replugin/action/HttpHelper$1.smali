.class Lcom/ymnsdk/replugin/action/HttpHelper$1;
.super Ljava/lang/Object;
.source "HttpHelper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/ymnsdk/replugin/action/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/action/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

.field final synthetic val$listerner:Lcom/ymnsdk/replugin/action/HttpListener;

.field final synthetic val$params:Ljava/lang/String;

.field final synthetic val$urlString:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/ymnsdk/replugin/action/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/ymnsdk/replugin/action/HttpListener;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

    iput-object p2, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$params:Ljava/lang/String;

    iput-object p3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$urlString:Ljava/lang/String;

    iput-object p4, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$listerner:Lcom/ymnsdk/replugin/action/HttpListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 10

    const-string v0, "GET"

    const-string v1, "="

    const/4 v2, 0x0

    .line 89
    :try_start_0
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-static {v3}, Lcom/ymnsdk/replugin/action/HttpHelper;->access$000(Lcom/ymnsdk/replugin/action/HttpHelper;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v3, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_4

    .line 90
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$params:Ljava/lang/String;

    if-nez v3, :cond_0

    .line 91
    new-instance v1, Ljava/net/URL;

    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$urlString:Ljava/lang/String;

    invoke-direct {v1, v3}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    goto/16 :goto_1

    .line 93
    :cond_0
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$params:Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->isEmpty()Z

    move-result v3

    if-nez v3, :cond_3

    .line 94
    new-instance v3, Lcom/google/gson/Gson;

    invoke-direct {v3}, Lcom/google/gson/Gson;-><init>()V

    iget-object v5, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$params:Ljava/lang/String;

    invoke-static {v5}, Ljava/net/URLDecoder;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    new-instance v6, Lcom/ymnsdk/replugin/action/HttpHelper$1$1;

    invoke-direct {v6, p0}, Lcom/ymnsdk/replugin/action/HttpHelper$1$1;-><init>(Lcom/ymnsdk/replugin/action/HttpHelper$1;)V

    invoke-virtual {v6}, Lcom/ymnsdk/replugin/action/HttpHelper$1$1;->getType()Ljava/lang/reflect/Type;

    move-result-object v6

    invoke-virtual {v3, v5, v6}, Lcom/google/gson/Gson;->fromJson(Ljava/lang/String;Ljava/lang/reflect/Type;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/Map;

    const-string v5, "?"

    .line 96
    invoke-interface {v3}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v6

    invoke-interface {v6}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v6

    :goto_0
    invoke-interface {v6}, Ljava/util/Iterator;->hasNext()Z

    move-result v7

    if-eqz v7, :cond_2

    invoke-interface {v6}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v7

    .line 97
    invoke-virtual {v5, v1}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_1

    .line 98
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "&"

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    .line 100
    :cond_1
    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v5}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Ljava/net/URLEncoder;->encode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v8, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    goto :goto_0

    .line 103
    :cond_2
    new-instance v1, Ljava/net/URL;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$urlString:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {v1, v3}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    goto :goto_1

    .line 105
    :cond_3
    new-instance v1, Ljava/net/URL;

    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$urlString:Ljava/lang/String;

    invoke-direct {v1, v3}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 108
    :goto_1
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 109
    :try_start_1
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    const/16 v0, 0x2710

    .line 110
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_2
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move-object v0, v2

    goto/16 :goto_3

    .line 112
    :cond_4
    :try_start_2
    new-instance v0, Ljava/net/URL;

    iget-object v1, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$urlString:Ljava/lang/String;

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 114
    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_3
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    .line 115
    :try_start_3
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-static {v3}, Lcom/ymnsdk/replugin/action/HttpHelper;->access$100(Lcom/ymnsdk/replugin/action/HttpHelper;)Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v3

    if-eqz v3, :cond_5

    .line 116
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-static {v3}, Lcom/ymnsdk/replugin/action/HttpHelper;->access$100(Lcom/ymnsdk/replugin/action/HttpHelper;)Landroid/content/Context;

    move-result-object v3

    invoke-static {v3, v0}, Lcom/ymnsdk/replugin/action/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v1

    :cond_5
    const/16 v3, 0x61a8

    .line 118
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    const/16 v3, 0x3a98

    .line 119
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 120
    invoke-virtual {v1, v4}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string v3, "Content-Type"

    const-string v5, "application/json;charset=UTF-8"

    .line 121
    invoke-virtual {v1, v3, v5}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    .line 122
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-static {v3}, Lcom/ymnsdk/replugin/action/HttpHelper;->access$000(Lcom/ymnsdk/replugin/action/HttpHelper;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "POST"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_6

    const/4 v3, 0x1

    .line 123
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 124
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 127
    :cond_6
    invoke-virtual {v0}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v0
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_2
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_8

    if-eqz v1, :cond_7

    .line 161
    :try_start_4
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_0

    goto :goto_2

    :catch_0
    move-exception v0

    .line 170
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_7
    :goto_2
    return-void

    .line 130
    :cond_8
    :try_start_5
    new-instance v0, Ljava/io/DataOutputStream;

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v3

    invoke-direct {v0, v3}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_2
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    .line 131
    :try_start_6
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$params:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    const-string v5, "UTF-8"

    invoke-virtual {v3, v5}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object v3

    invoke-virtual {v0, v3}, Ljava/io/DataOutputStream;->write([B)V

    .line 133
    invoke-virtual {v0}, Ljava/io/DataOutputStream;->flush()V

    .line 134
    invoke-virtual {v0}, Ljava/io/DataOutputStream;->close()V

    .line 138
    :goto_3
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    const/16 v5, 0xc8

    if-ne v3, v5, :cond_a

    .line 139
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v2

    const/high16 v3, 0x100000

    new-array v3, v3, [B

    .line 142
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    .line 143
    :goto_4
    invoke-virtual {v2, v3}, Ljava/io/InputStream;->read([B)I

    move-result v6

    const/4 v7, -0x1

    if-eq v6, v7, :cond_9

    .line 144
    new-instance v7, Ljava/lang/String;

    invoke-direct {v7, v3, v4, v6}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v5, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_4

    .line 146
    :cond_9
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V

    .line 147
    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    .line 149
    iget-object v4, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->this$0:Lcom/ymnsdk/replugin/action/HttpHelper;

    invoke-virtual {v4, v3}, Lcom/ymnsdk/replugin/action/HttpHelper;->decode(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    .line 151
    iget-object v4, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$listerner:Lcom/ymnsdk/replugin/action/HttpListener;

    invoke-interface {v4, v3}, Lcom/ymnsdk/replugin/action/HttpListener;->onComplete(Ljava/lang/String;)V

    goto :goto_5

    .line 153
    :cond_a
    iget-object v3, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$listerner:Lcom/ymnsdk/replugin/action/HttpListener;

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v4

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseMessage()Ljava/lang/String;

    move-result-object v5

    invoke-interface {v3, v4, v5}, Lcom/ymnsdk/replugin/action/HttpListener;->onError(ILjava/lang/String;)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :goto_5
    if-eqz v1, :cond_b

    .line 161
    :try_start_7
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_b
    if-eqz v0, :cond_c

    .line 164
    invoke-virtual {v0}, Ljava/io/DataOutputStream;->close()V

    :cond_c
    if-eqz v2, :cond_f

    .line 167
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_4

    goto/16 :goto_9

    :catchall_0
    move-exception v3

    move-object v9, v1

    move-object v1, v0

    move-object v0, v3

    move-object v3, v2

    move-object v2, v9

    goto :goto_a

    :catch_1
    move-exception v3

    move-object v9, v1

    move-object v1, v0

    move-object v0, v3

    move-object v3, v2

    move-object v2, v9

    goto :goto_6

    :catchall_1
    move-exception v0

    move-object v3, v2

    move-object v2, v1

    move-object v1, v3

    goto :goto_a

    :catch_2
    move-exception v0

    move-object v3, v2

    move-object v2, v1

    move-object v1, v3

    goto :goto_6

    :catchall_2
    move-exception v0

    move-object v1, v2

    move-object v3, v1

    goto :goto_a

    :catch_3
    move-exception v0

    move-object v1, v2

    move-object v3, v1

    .line 156
    :goto_6
    :try_start_8
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 157
    iget-object v4, p0, Lcom/ymnsdk/replugin/action/HttpHelper$1;->val$listerner:Lcom/ymnsdk/replugin/action/HttpListener;

    invoke-virtual {v0}, Ljava/lang/Object;->hashCode()I

    move-result v5

    invoke-virtual {v0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v0

    invoke-interface {v4, v5, v0}, Lcom/ymnsdk/replugin/action/HttpListener;->onError(ILjava/lang/String;)V
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_3

    if-eqz v2, :cond_d

    .line 161
    :try_start_9
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_7

    :catch_4
    move-exception v0

    goto :goto_8

    :cond_d
    :goto_7
    if-eqz v1, :cond_e

    .line 164
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V

    :cond_e
    if-eqz v3, :cond_f

    .line 167
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_9
    .catch Ljava/lang/Exception; {:try_start_9 .. :try_end_9} :catch_4

    goto :goto_9

    .line 170
    :goto_8
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_f
    :goto_9
    return-void

    :catchall_3
    move-exception v0

    :goto_a
    if-eqz v2, :cond_10

    .line 161
    :try_start_a
    invoke-virtual {v2}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_b

    :catch_5
    move-exception v1

    goto :goto_c

    :cond_10
    :goto_b
    if-eqz v1, :cond_11

    .line 164
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V

    :cond_11
    if-eqz v3, :cond_12

    .line 167
    invoke-virtual {v3}, Ljava/io/InputStream;->close()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_5

    goto :goto_d

    .line 170
    :goto_c
    invoke-virtual {v1}, Ljava/lang/Exception;->printStackTrace()V

    .line 172
    :cond_12
    :goto_d
    throw v0
.end method
