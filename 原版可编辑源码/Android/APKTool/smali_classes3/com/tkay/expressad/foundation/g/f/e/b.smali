.class public final Lcom/tkay/expressad/foundation/g/f/e/b;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/f/e/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/expressad/foundation/g/f/e/b$a;
    }
.end annotation


# static fields
.field private static final a:I = 0x64


# instance fields
.field private b:Lcom/tkay/expressad/foundation/g/f/c/a;

.field private c:Ljavax/net/ssl/SSLSocketFactory;


# direct methods
.method public constructor <init>(Ljavax/net/ssl/SSLSocketFactory;Lcom/tkay/expressad/foundation/g/f/c/a;)V
    .locals 0

    .line 31
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 32
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->c:Ljavax/net/ssl/SSLSocketFactory;

    .line 33
    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    return-void
.end method

.method static synthetic a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 0

    .line 26
    invoke-static {p0}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;

    move-result-object p0

    return-object p0
.end method

.method private a(Ljava/net/URL;)Ljava/net/HttpURLConnection;
    .locals 5

    .line 118
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    .line 119
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 120
    new-instance v0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    new-instance v2, Ljava/net/InetSocketAddress;

    iget-object v3, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v3, v3, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    .line 121
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-direct {v2, v3, v4}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    invoke-direct {v0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 120
    invoke-virtual {p1, v0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    goto :goto_0

    .line 123
    :cond_0
    invoke-virtual {p1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object p1

    check-cast p1, Ljava/net/HttpURLConnection;

    :goto_0
    const/4 v0, 0x0

    .line 126
    invoke-virtual {p1, v0}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    return-object p1
.end method

.method private a(Ljava/net/URL;Lcom/tkay/expressad/foundation/g/f/i;)Ljava/net/HttpURLConnection;
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/URL;",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;)",
            "Ljava/net/HttpURLConnection;"
        }
    .end annotation

    .line 3118
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    if-eqz v0, :cond_0

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v0, v0, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    .line 3119
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 3120
    new-instance v0, Ljava/net/Proxy;

    sget-object v1, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    new-instance v2, Ljava/net/InetSocketAddress;

    iget-object v3, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v3, v3, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    .line 3121
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v4

    invoke-virtual {v4}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-direct {v2, v3, v4}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    invoke-direct {v0, v1, v2}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 3120
    invoke-virtual {p1, v0}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;

    goto :goto_0

    .line 3123
    :cond_0
    invoke-virtual {p1}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v0

    check-cast v0, Ljava/net/HttpURLConnection;

    :goto_0
    const/4 v1, 0x0

    .line 3126
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 134
    invoke-virtual {p2}, Lcom/tkay/expressad/foundation/g/f/i;->k()I

    move-result p2

    .line 135
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 136
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 137
    invoke-virtual {v0, v1}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/4 p2, 0x1

    .line 138
    invoke-virtual {v0, p2}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 140
    invoke-virtual {p1}, Ljava/net/URL;->getProtocol()Ljava/lang/String;

    move-result-object p1

    const-string p2, "https"

    invoke-virtual {p2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->c:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz p1, :cond_1

    .line 141
    move-object p2, v0

    check-cast p2, Ljavax/net/ssl/HttpsURLConnection;

    invoke-virtual {p2, p1}, Ljavax/net/ssl/HttpsURLConnection;->setSSLSocketFactory(Ljavax/net/ssl/SSLSocketFactory;)V

    :cond_1
    return-object v0
.end method

.method private static a(Ljava/util/Map;)Ljava/util/List;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;>;)",
            "Ljava/util/List<",
            "Lcom/tkay/expressad/foundation/g/f/c/c;",
            ">;"
        }
    .end annotation

    .line 73
    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    .line 74
    invoke-interface {p0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :cond_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    .line 75
    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 76
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 77
    new-instance v4, Lcom/tkay/expressad/foundation/g/f/c/c;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-direct {v4, v5, v3}, Lcom/tkay/expressad/foundation/g/f/c/c;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    invoke-interface {v0, v4}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_1
    return-object v0
.end method

.method private static a(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;)V"
        }
    .end annotation

    .line 149
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->a()I

    move-result v0

    packed-switch v0, :pswitch_data_0

    .line 178
    new-instance p0, Ljava/lang/IllegalStateException;

    const-string p1, "Unknown method type."

    invoke-direct {p0, p1}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p0

    .line 174
    :pswitch_0
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V

    const-string p1, "PATCH"

    .line 175
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    return-void

    :pswitch_1
    const-string p1, "TRACE"

    .line 171
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    return-void

    :pswitch_2
    const-string p1, "OPTIONS"

    .line 168
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    return-void

    :pswitch_3
    const-string p1, "HEAD"

    .line 165
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    return-void

    :pswitch_4
    const-string p1, "DELETE"

    .line 158
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    return-void

    :pswitch_5
    const-string v0, "PUT"

    .line 161
    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 162
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void

    :pswitch_6
    const-string v0, "POST"

    .line 154
    invoke-virtual {p0, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 155
    invoke-static {p0, p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V

    return-void

    :pswitch_7
    const-string p1, "GET"

    .line 151
    invoke-virtual {p0, p1}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    return-void

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method private static a(II)Z
    .locals 1

    const/4 v0, 0x4

    if-eq p0, v0, :cond_1

    const/16 p0, 0x64

    if-gt p0, p1, :cond_0

    const/16 p0, 0xc8

    if-lt p1, p0, :cond_1

    :cond_0
    const/16 p0, 0xcc

    if-eq p1, p0, :cond_1

    const/16 p0, 0x130

    if-eq p1, p0, :cond_1

    const/4 p0, 0x1

    return p0

    :cond_1
    const/4 p0, 0x0

    return p0
.end method

.method private static b(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 0

    .line 109
    :try_start_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object p0
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 111
    :catch_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getErrorStream()Ljava/io/InputStream;

    move-result-object p0

    :goto_0
    return-object p0
.end method

.method private static b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/net/HttpURLConnection;",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;)V"
        }
    .end annotation

    .line 184
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->h()[B

    move-result-object v0

    if-eqz v0, :cond_2

    .line 186
    instance-of v1, p1, Lcom/tkay/expressad/foundation/g/f/d/f;

    if-eqz v1, :cond_0

    const/16 v2, 0x800

    .line 187
    invoke-virtual {p0, v2}, Ljava/net/HttpURLConnection;->setChunkedStreamingMode(I)V

    :cond_0
    const/4 v2, 0x1

    .line 190
    invoke-virtual {p0, v2}, Ljava/net/HttpURLConnection;->setDoOutput(Z)V

    .line 191
    new-instance v2, Ljava/io/DataOutputStream;

    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getOutputStream()Ljava/io/OutputStream;

    move-result-object p0

    invoke-direct {v2, p0}, Ljava/io/DataOutputStream;-><init>(Ljava/io/OutputStream;)V

    .line 192
    invoke-virtual {v2, v0}, Ljava/io/DataOutputStream;->write([B)V

    if-eqz v1, :cond_1

    .line 195
    invoke-virtual {p1, v2}, Lcom/tkay/expressad/foundation/g/f/i;->a(Ljava/io/OutputStream;)V

    .line 197
    :cond_1
    invoke-virtual {v2}, Ljava/io/DataOutputStream;->close()V

    :cond_2
    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/f/i;)Lcom/tkay/expressad/foundation/g/f/f/b;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/i<",
            "*>;)",
            "Lcom/tkay/expressad/foundation/g/f/f/b;"
        }
    .end annotation

    .line 39
    new-instance v0, Ljava/net/URL;

    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->d()Ljava/lang/String;

    move-result-object v1

    invoke-direct {v0, v1}, Ljava/net/URL;-><init>(Ljava/lang/String;)V

    .line 2118
    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    if-eqz v1, :cond_0

    iget-object v1, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v1, v1, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    .line 2119
    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    .line 2120
    new-instance v1, Ljava/net/Proxy;

    sget-object v2, Ljava/net/Proxy$Type;->HTTP:Ljava/net/Proxy$Type;

    new-instance v3, Ljava/net/InetSocketAddress;

    iget-object v4, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v4, v4, Lcom/tkay/expressad/foundation/g/f/c/a;->b:Ljava/lang/String;

    iget-object v5, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->b:Lcom/tkay/expressad/foundation/g/f/c/a;

    iget-object v5, v5, Lcom/tkay/expressad/foundation/g/f/c/a;->c:Ljava/lang/String;

    .line 2121
    invoke-static {v5}, Ljava/lang/Integer;->valueOf(Ljava/lang/String;)Ljava/lang/Integer;

    move-result-object v5

    invoke-virtual {v5}, Ljava/lang/Integer;->intValue()I

    move-result v5

    invoke-direct {v3, v4, v5}, Ljava/net/InetSocketAddress;-><init>(Ljava/lang/String;I)V

    invoke-direct {v1, v2, v3}, Ljava/net/Proxy;-><init>(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V

    .line 2120
    invoke-virtual {v0, v1}, Ljava/net/URL;->openConnection(Ljava/net/Proxy;)Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    goto :goto_0

    .line 2123
    :cond_0
    invoke-virtual {v0}, Ljava/net/URL;->openConnection()Ljava/net/URLConnection;

    move-result-object v1

    check-cast v1, Ljava/net/HttpURLConnection;

    :goto_0
    const/4 v2, 0x0

    .line 2126
    invoke-virtual {v1, v2}, Ljava/net/HttpURLConnection;->setInstanceFollowRedirects(Z)V

    .line 1134
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->k()I

    move-result v3

    .line 1135
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setConnectTimeout(I)V

    .line 1136
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setReadTimeout(I)V

    .line 1137
    invoke-virtual {v1, v2}, Ljava/net/HttpURLConnection;->setUseCaches(Z)V

    const/4 v3, 0x1

    .line 1138
    invoke-virtual {v1, v3}, Ljava/net/HttpURLConnection;->setDoInput(Z)V

    .line 1140
    invoke-virtual {v0}, Ljava/net/URL;->getProtocol()Ljava/lang/String;

    move-result-object v0

    const-string v4, "https"

    invoke-virtual {v4, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/f/e/b;->c:Ljavax/net/ssl/SSLSocketFactory;

    if-eqz v0, :cond_1

    .line 1141
    move-object v4, v1

    check-cast v4, Ljavax/net/ssl/HttpsURLConnection;

    invoke-virtual {v4, v0}, Ljavax/net/ssl/HttpsURLConnection;->setSSLSocketFactory(Ljavax/net/ssl/SSLSocketFactory;)V

    .line 44
    :cond_1
    :try_start_0
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->g()Ljava/util/Map;

    move-result-object v0

    .line 45
    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_1
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v4

    if-eqz v4, :cond_2

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/util/Map$Entry;

    .line 46
    invoke-interface {v4}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;

    invoke-interface {v4}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/String;

    invoke-virtual {v1, v5, v4}, Ljava/net/HttpURLConnection;->setRequestProperty(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_1

    .line 2149
    :cond_2
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->a()I

    move-result v0

    packed-switch v0, :pswitch_data_0

    .line 2178
    new-instance p1, Ljava/lang/IllegalStateException;

    goto/16 :goto_4

    .line 2174
    :pswitch_0
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V

    const-string v0, "PATCH"

    .line 2175
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    goto :goto_2

    :pswitch_1
    const-string v0, "TRACE"

    .line 2171
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    goto :goto_2

    :pswitch_2
    const-string v0, "OPTIONS"

    .line 2168
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    goto :goto_2

    :pswitch_3
    const-string v0, "HEAD"

    .line 2165
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    goto :goto_2

    :pswitch_4
    const-string v0, "DELETE"

    .line 2158
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    goto :goto_2

    :pswitch_5
    const-string v0, "PUT"

    .line 2161
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 2162
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V

    goto :goto_2

    :pswitch_6
    const-string v0, "POST"

    .line 2154
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 2155
    invoke-static {v1, p1}, Lcom/tkay/expressad/foundation/g/f/e/b;->b(Ljava/net/HttpURLConnection;Lcom/tkay/expressad/foundation/g/f/i;)V

    goto :goto_2

    :pswitch_7
    const-string v0, "GET"

    .line 2151
    invoke-virtual {v1, v0}, Ljava/net/HttpURLConnection;->setRequestMethod(Ljava/lang/String;)V

    .line 50
    :goto_2
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getResponseCode()I

    move-result v0

    const/4 v4, -0x1

    if-eq v0, v4, :cond_6

    .line 55
    invoke-virtual {p1}, Lcom/tkay/expressad/foundation/g/f/i;->a()I

    move-result p1

    const/4 v4, 0x4

    if-eq p1, v4, :cond_4

    const/16 p1, 0x64

    if-gt p1, v0, :cond_3

    const/16 p1, 0xc8

    if-lt v0, p1, :cond_4

    :cond_3
    const/16 p1, 0xcc

    if-eq v0, p1, :cond_4

    const/16 p1, 0x130

    if-eq v0, p1, :cond_4

    move p1, v3

    goto :goto_3

    :cond_4
    move p1, v2

    :goto_3
    if-nez p1, :cond_5

    .line 56
    new-instance p1, Lcom/tkay/expressad/foundation/g/f/f/b;

    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/expressad/foundation/g/f/e/b;->a(Ljava/util/Map;)Ljava/util/List;

    move-result-object v3

    invoke-direct {p1, v0, v3}, Lcom/tkay/expressad/foundation/g/f/f/b;-><init>(ILjava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 67
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V

    return-object p1

    .line 61
    :cond_5
    :try_start_1
    new-instance p1, Lcom/tkay/expressad/foundation/g/f/f/b;

    .line 63
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->getHeaderFields()Ljava/util/Map;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/expressad/foundation/g/f/e/b;->a(Ljava/util/Map;)Ljava/util/List;

    move-result-object v2

    new-instance v4, Lcom/tkay/expressad/foundation/g/f/e/b$a;

    invoke-direct {v4, v1}, Lcom/tkay/expressad/foundation/g/f/e/b$a;-><init>(Ljava/net/HttpURLConnection;)V

    invoke-direct {p1, v0, v2, v4}, Lcom/tkay/expressad/foundation/g/f/f/b;-><init>(ILjava/util/List;Ljava/io/InputStream;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p1

    :catchall_0
    move-exception p1

    move v2, v3

    goto :goto_5

    .line 52
    :cond_6
    :try_start_2
    new-instance p1, Ljava/io/IOException;

    const-string v0, "Could not retrieve response code from HttpUrlConnection."

    invoke-direct {p1, v0}, Ljava/io/IOException;-><init>(Ljava/lang/String;)V

    throw p1

    :goto_4
    const-string v0, "Unknown method type."

    .line 2178
    invoke-direct {p1, v0}, Ljava/lang/IllegalStateException;-><init>(Ljava/lang/String;)V

    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    :goto_5
    if-nez v2, :cond_7

    .line 67
    invoke-virtual {v1}, Ljava/net/HttpURLConnection;->disconnect()V

    .line 69
    :cond_7
    throw p1

    nop

    :pswitch_data_0
    .packed-switch 0x0
        :pswitch_7
        :pswitch_6
        :pswitch_5
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
