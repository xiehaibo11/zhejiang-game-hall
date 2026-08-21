.class public abstract Lcom/tramini/plugin/a/d/a;
.super Ljava/lang/Object;


# static fields
.field public static final a:Ljava/lang/String; = "platform"

.field public static final b:Ljava/lang/String; = "os_vn"

.field public static final c:Ljava/lang/String; = "os_vc"

.field public static final d:Ljava/lang/String; = "package_name"

.field public static final e:Ljava/lang/String; = "app_vn"

.field public static final f:Ljava/lang/String; = "app_vc"

.field public static final g:Ljava/lang/String; = "sdk_ver"

.field public static final h:Ljava/lang/String; = "android_id"

.field public static final i:Ljava/lang/String; = "is_proxy"

.field public static final j:Ljava/lang/String; = "ds_pl"

.field public static final k:Ljava/lang/String; = "area_type"

.field public static final l:I = 0x1

.field public static final m:I = 0x2

.field private static final o:Ljava/lang/String;


# instance fields
.field protected n:Lcom/tramini/plugin/a/d/b;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 46
    const-class v0, Lcom/tramini/plugin/a/d/a;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tramini/plugin/a/d/a;->o:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 70
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 5

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 354
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v1, "Content-Encoding"

    .line 358
    invoke-virtual {p0, v1}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "gzip"

    .line 359
    invoke-virtual {v1, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p0, 0x2

    :try_start_1
    new-array v1, p0, [B

    .line 364
    new-instance v2, Ljava/io/BufferedInputStream;

    invoke-direct {v2, v0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    .line 365
    invoke-virtual {v2, p0}, Ljava/io/BufferedInputStream;->mark(I)V

    .line 366
    invoke-virtual {v2, v1}, Ljava/io/BufferedInputStream;->read([B)I

    move-result p0

    .line 368
    invoke-virtual {v2}, Ljava/io/BufferedInputStream;->reset()V

    const/4 v3, 0x0

    .line 370
    aget-byte v3, v1, v3

    and-int/lit16 v3, v3, 0xff

    const/4 v4, 0x1

    aget-byte v1, v1, v4

    and-int/lit16 v1, v1, 0xff

    shl-int/lit8 v1, v1, 0x8

    or-int/2addr v1, v3

    const/4 v3, -0x1

    if-eq p0, v3, :cond_1

    const p0, 0x8b1f

    if-ne v1, p0, :cond_1

    .line 373
    new-instance p0, Ljava/util/zip/GZIPInputStream;

    invoke-direct {p0, v2}, Ljava/util/zip/GZIPInputStream;-><init>(Ljava/io/InputStream;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    move-object v0, p0

    goto :goto_0

    :cond_1
    move-object v0, v2

    :catch_1
    :cond_2
    :goto_0
    return-object v0
.end method

.method private a(I)V
    .locals 1

    .line 169
    new-instance v0, Lcom/tramini/plugin/a/d/a$1;

    invoke-direct {v0, p0, p1}, Lcom/tramini/plugin/a/d/a$1;-><init>(Lcom/tramini/plugin/a/d/a;I)V

    .line 321
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object p1

    invoke-virtual {p1, v0}, Lcom/tramini/plugin/a/g/b/a;->a(Lcom/tramini/plugin/a/g/b/b;)V

    return-void
.end method

.method protected static b(Ljava/lang/String;)[B
    .locals 3

    if-eqz p0, :cond_1

    .line 389
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 392
    :cond_0
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 395
    :try_start_0
    new-instance v1, Ljava/util/zip/GZIPOutputStream;

    invoke-direct {v1, v0}, Ljava/util/zip/GZIPOutputStream;-><init>(Ljava/io/OutputStream;)V

    const-string v2, "utf-8"

    .line 396
    invoke-virtual {p0, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/util/zip/GZIPOutputStream;->write([B)V

    .line 397
    invoke-virtual {v1}, Ljava/util/zip/GZIPOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 399
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 401
    :goto_0
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p0

    return-object p0

    :cond_1
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method protected abstract a()I
.end method

.method protected abstract a(Ljava/lang/String;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Object;"
        }
    .end annotation
.end method

.method public final a(ILcom/tramini/plugin/a/d/b;)V
    .locals 0

    .line 80
    iput-object p2, p0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    .line 1169
    new-instance p2, Lcom/tramini/plugin/a/d/a$1;

    invoke-direct {p2, p0, p1}, Lcom/tramini/plugin/a/d/a$1;-><init>(Lcom/tramini/plugin/a/d/a;I)V

    .line 1321
    invoke-static {}, Lcom/tramini/plugin/a/g/b/a;->a()Lcom/tramini/plugin/a/g/b/a;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/tramini/plugin/a/g/b/a;->a(Lcom/tramini/plugin/a/g/b/b;)V

    return-void
.end method

.method protected final a(Ljava/lang/Object;)V
    .locals 1

    .line 342
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    if-eqz v0, :cond_0

    .line 343
    invoke-interface {v0, p1}, Lcom/tramini/plugin/a/d/b;->a(Ljava/lang/Object;)V

    :cond_0
    return-void
.end method

.method protected abstract b()Ljava/lang/String;
.end method

.method protected abstract c()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end method

.method protected abstract d()[B
.end method

.method protected e()Lorg/json/JSONObject;
    .locals 4

    .line 110
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 111
    invoke-static {}, Lcom/tramini/plugin/a/a/c;->a()Lcom/tramini/plugin/a/a/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/tramini/plugin/a/a/c;->b()Landroid/content/Context;

    move-result-object v1

    :try_start_0
    const-string v2, "platform"

    const/4 v3, 0x1

    .line 113
    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v2, "os_vn"

    .line 114
    invoke-static {}, Lcom/tramini/plugin/a/g/e;->b()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "os_vc"

    .line 115
    invoke-static {}, Lcom/tramini/plugin/a/g/e;->a()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "package_name"

    .line 116
    invoke-static {v1}, Lcom/tramini/plugin/a/g/e;->c(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "app_vn"

    .line 117
    invoke-static {v1}, Lcom/tramini/plugin/a/g/e;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v2, "app_vc"

    .line 118
    invoke-static {v1}, Lcom/tramini/plugin/a/g/e;->a(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v2, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "sdk_ver"

    const-string v2, "1.0.4"

    .line 119
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "ds_pl"

    const-string v2, "3"

    .line 122
    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "area_type"

    .line 124
    sget v2, Lcom/tramini/plugin/a/a/a$b;->a:I

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method

.method protected f()Ljava/lang/String;
    .locals 5

    .line 134
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 135
    invoke-virtual {p0}, Lcom/tramini/plugin/a/d/a;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tramini/plugin/a/g/c;->b(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "d_version"

    const-string v3, "1.0"

    .line 137
    invoke-interface {v0, v2, v3}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v2, "d1"

    .line 138
    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 140
    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "d_version=1.0&d1="

    invoke-virtual {v2, v1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tramini/plugin/a/g/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "d_sign"

    .line 141
    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "pl_c"

    const-string v2, "4"

    .line 142
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 144
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    .line 145
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 147
    :try_start_0
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 148
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_0

    .line 150
    :cond_0
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 154
    :catch_0
    invoke-static {}, Ljava/lang/System;->gc()V

    :catch_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public abstract g()Z
.end method

.method protected final h()V
    .locals 1

    .line 330
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    if-eqz v0, :cond_0

    .line 331
    invoke-interface {v0}, Lcom/tramini/plugin/a/d/b;->b()V

    :cond_0
    return-void
.end method

.method protected final i()V
    .locals 1

    .line 336
    iget-object v0, p0, Lcom/tramini/plugin/a/d/a;->n:Lcom/tramini/plugin/a/d/b;

    if-eqz v0, :cond_0

    .line 337
    invoke-interface {v0}, Lcom/tramini/plugin/a/d/b;->b()V

    :cond_0
    return-void
.end method
