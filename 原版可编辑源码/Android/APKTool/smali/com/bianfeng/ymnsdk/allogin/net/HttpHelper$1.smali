.class Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;
.super Ljava/lang/Object;
.source "HttpHelper.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->createHttpRequest(Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;

.field final synthetic val$listerner:Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;

.field final synthetic val$params:Ljava/lang/String;

.field final synthetic val$urlString:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;Ljava/lang/String;Ljava/lang/String;Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;)V
    .locals 0

    .line 68
    iput-object p1, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->this$0:Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;

    iput-object p2, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$urlString:Ljava/lang/String;

    iput-object p3, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$params:Ljava/lang/String;

    iput-object p4, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$listerner:Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 8

    const/4 v0, 0x0

    .line 77
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->this$0:Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;

    invoke-static {v1}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->access$000(Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "POST"

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    const/4 v2, 0x0

    const/16 v3, 0x3a98

    const/16 v4, 0x61a8

    if-eqz v1, :cond_3

    .line 79
    new-instance v1, Ljava/net/URL;

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$urlString:Ljava/lang/String;

    invoke-direct {v1, v5}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 80
    invoke-virtual {v1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v5

    check-cast v5, Ljava/net/HttpURLConnection;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_3
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    .line 81
    :try_start_1
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->this$0:Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->access$100(Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;)Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v6

    if-eqz v6, :cond_0

    .line 82
    iget-object v6, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->this$0:Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;

    invoke-static {v6}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->access$100(Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;)Landroid/content/Context;

    move-result-object v6

    invoke-static {v6, v1}, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper;->getProxy(Landroid/content/Context;Ljava/net/URL;)Ljava/net/HttpURLConnection;

    move-result-object v5

    .line 84
    :cond_0
    invoke-virtual {v5, v4}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 85
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 86
    invoke-virtual {v5, v2}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const-string v3, "Content-Type"

    const-string v4, "application/json"

    .line 87
    invoke-virtual {v5, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const-string v3, "connection"

    const-string v4, "keep-alive"

    .line 88
    invoke-virtual {v5, v3, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v3, 0x1

    .line 89
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 90
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 91
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 92
    invoke-virtual {v1}, Ljava/net/URL;->getHost()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v1
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v1, :cond_2

    if-eqz v5, :cond_1

    .line 130
    :try_start_2
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 139
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_1
    :goto_0
    return-void

    .line 95
    :cond_2
    :try_start_3
    new-instance v1, Ljava/io/DataOutputStream;

    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object v3

    invoke-direct {v1, v3}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    .line 97
    :try_start_4
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$params:Ljava/lang/String;

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/io/DataOutputStream;->writeBytes(Ljava/lang/String;)V

    .line 99
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->flush()V

    .line 100
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V
    :try_end_4
    .catch Ljava/lang/Exception; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_3

    :catchall_0
    move-exception v1

    move-object v2, v0

    move-object v3, v1

    move-object v1, v2

    :goto_1
    move-object v0, v5

    goto/16 :goto_a

    :catch_1
    move-exception v1

    move-object v2, v0

    move-object v3, v1

    move-object v1, v2

    :goto_2
    move-object v0, v5

    goto/16 :goto_6

    .line 102
    :cond_3
    :try_start_5
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$urlString:Ljava/lang/String;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "?"

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$params:Ljava/lang/String;

    invoke-virtual {v1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    .line 103
    new-instance v5, Ljava/net/URL;

    invoke-direct {v5, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 104
    invoke-virtual {v5}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    move-object v5, v1

    check-cast v5, Ljava/net/HttpURLConnection;
    :try_end_5
    .catch Ljava/lang/Exception; {:try_start_5 .. :try_end_5} :catch_3
    .catchall {:try_start_5 .. :try_end_5} :catchall_2

    .line 106
    :try_start_6
    invoke-virtual {v5, v4}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 107
    invoke-virtual {v5, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V
    :try_end_6
    .catch Ljava/lang/Exception; {:try_start_6 .. :try_end_6} :catch_1
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    move-object v1, v0

    .line 109
    :goto_3
    :try_start_7
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    const/16 v4, 0xc8

    if-ne v3, v4, :cond_5

    .line 110
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0

    const/high16 v3, 0x100000

    new-array v3, v3, [B

    .line 113
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 114
    :goto_4
    invoke-virtual {v0, v3}, Ljava/io/InputStream;->read([B)I

    move-result v6

    const/4 v7, -0x1

    if-eq v6, v7, :cond_4

    .line 115
    new-instance v7, Ljava/lang/String;

    invoke-direct {v7, v3, v2, v6}, Ljava/lang/String;-><init>([BII)V

    invoke-virtual {v4, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_4

    .line 117
    :cond_4
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V

    .line 118
    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    .line 120
    iget-object v3, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$listerner:Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;

    invoke-interface {v3, v2}, Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;->onComplete(Ljava/lang/String;)V

    goto :goto_5

    .line 122
    :cond_5
    iget-object v2, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$listerner:Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;

    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v3

    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->getResponseMessage()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v2, v3, v4}, Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;->onError(ILjava/lang/String;)V
    :try_end_7
    .catch Ljava/lang/Exception; {:try_start_7 .. :try_end_7} :catch_2
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :goto_5
    if-eqz v5, :cond_6

    .line 130
    :try_start_8
    invoke-virtual {v5}, Ljava/net/HttpURLConnection;->disconnect()V

    :cond_6
    if-eqz v1, :cond_7

    .line 133
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V

    :cond_7
    if-eqz v0, :cond_a

    .line 136
    invoke-virtual {v0}, Ljava/io/InputStream;->close()V
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_4

    goto :goto_9

    :catchall_1
    move-exception v2

    move-object v3, v2

    move-object v2, v0

    goto/16 :goto_1

    :catch_2
    move-exception v2

    move-object v3, v2

    move-object v2, v0

    goto/16 :goto_2

    :catchall_2
    move-exception v1

    move-object v2, v0

    move-object v3, v1

    move-object v1, v2

    goto :goto_a

    :catch_3
    move-exception v1

    move-object v2, v0

    move-object v3, v1

    move-object v1, v2

    .line 125
    :goto_6
    :try_start_9
    invoke-virtual {v3}, Ljava/lang/Exception;->printStackTrace()V

    .line 126
    iget-object v4, p0, Lcom/bianfeng/ymnsdk/allogin/net/HttpHelper$1;->val$listerner:Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;

    invoke-virtual {v3}, Ljava/lang/Object;->hashCode()I

    move-result v5

    invoke-virtual {v3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v4, v5, v3}, Lcom/bianfeng/ymnsdk/allogin/net/HttpListener;->onError(ILjava/lang/String;)V
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    if-eqz v0, :cond_8

    .line 130
    :try_start_a
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_7

    :catch_4
    move-exception v0

    goto :goto_8

    :cond_8
    :goto_7
    if-eqz v1, :cond_9

    .line 133
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V

    :cond_9
    if-eqz v2, :cond_a

    .line 136
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_a
    .catch Ljava/lang/Exception; {:try_start_a .. :try_end_a} :catch_4

    goto :goto_9

    .line 139
    :goto_8
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_a
    :goto_9
    return-void

    :catchall_3
    move-exception v3

    :goto_a
    if-eqz v0, :cond_b

    .line 130
    :try_start_b
    invoke-virtual {v0}, Ljava/net/HttpURLConnection;->disconnect()V

    goto :goto_b

    :catch_5
    move-exception v0

    goto :goto_c

    :cond_b
    :goto_b
    if-eqz v1, :cond_c

    .line 133
    invoke-virtual {v1}, Ljava/io/DataOutputStream;->close()V

    :cond_c
    if-eqz v2, :cond_d

    .line 136
    invoke-virtual {v2}, Ljava/io/InputStream;->close()V
    :try_end_b
    .catch Ljava/lang/Exception; {:try_start_b .. :try_end_b} :catch_5

    goto :goto_d

    .line 139
    :goto_c
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 141
    :cond_d
    :goto_d
    goto :goto_f

    :goto_e
    throw v3

    :goto_f
    goto :goto_e
.end method
