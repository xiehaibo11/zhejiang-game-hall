.class public abstract Lcom/tkay/core/common/h/a;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String; = "http.loader"


# instance fields
.field protected m:Lcom/tkay/core/common/h/k;

.field protected n:Z

.field protected o:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 103
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Ljava/net/HttpURLConnection;)Ljava/io/InputStream;
    .locals 5

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return-object v0

    .line 600
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Ljava/net/HttpURLConnection;->getInputStream()Ljava/io/InputStream;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    const-string v1, "Content-Encoding"

    .line 604
    invoke-virtual {p0, v1}, Ljava/net/HttpURLConnection;->getHeaderField(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    const-string v1, "gzip"

    .line 605
    invoke-virtual {v1, p0}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_2

    const/4 p0, 0x2

    :try_start_1
    new-array v1, p0, [B

    .line 610
    new-instance v2, Ljava/io/BufferedInputStream;

    invoke-direct {v2, v0}, Ljava/io/BufferedInputStream;-><init>(Ljava/io/InputStream;)V

    .line 611
    invoke-virtual {v2, p0}, Ljava/io/BufferedInputStream;->mark(I)V

    .line 612
    invoke-virtual {v2, v1}, Ljava/io/BufferedInputStream;->read([B)I

    move-result p0

    .line 614
    invoke-virtual {v2}, Ljava/io/BufferedInputStream;->reset()V

    const/4 v3, 0x0

    .line 616
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

    .line 619
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

.method static synthetic a(Lcom/tkay/core/common/h/a;)V
    .locals 2

    .line 3666
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->m()I

    move-result v0

    const/16 v1, 0x8

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    .line 3668
    invoke-static {}, Lcom/tkay/core/common/e/a;->a()Lcom/tkay/core/common/e/a;

    move-result-object v0

    iget-object p0, p0, Lcom/tkay/core/common/h/a;->o:Ljava/lang/String;

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/e/a;->b(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method protected static c(Ljava/lang/String;)[B
    .locals 3

    if-eqz p0, :cond_1

    .line 635
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 638
    :cond_0
    new-instance v0, Ljava/io/ByteArrayOutputStream;

    invoke-direct {v0}, Ljava/io/ByteArrayOutputStream;-><init>()V

    .line 641
    :try_start_0
    new-instance v1, Ljava/util/zip/GZIPOutputStream;

    invoke-direct {v1, v0}, Ljava/util/zip/GZIPOutputStream;-><init>(Ljava/io/OutputStream;)V

    const-string v2, "utf-8"

    .line 642
    invoke-virtual {p0, v2}, Ljava/lang/String;->getBytes(Ljava/lang/String;)[B

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/util/zip/GZIPOutputStream;->write([B)V

    .line 643
    invoke-virtual {v1}, Ljava/util/zip/GZIPOutputStream;->close()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 645
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 647
    :goto_0
    invoke-virtual {v0}, Ljava/io/ByteArrayOutputStream;->toByteArray()[B

    move-result-object p0

    return-object p0

    :cond_1
    :goto_1
    const/4 p0, 0x0

    return-object p0
.end method

.method private d(I)V
    .locals 2

    .line 263
    new-instance v0, Lcom/tkay/core/common/h/a$1;

    invoke-direct {v0, p0, p1}, Lcom/tkay/core/common/h/a$1;-><init>(Lcom/tkay/core/common/h/a;I)V

    .line 529
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->o()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 531
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    const/4 v1, 0x1

    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void

    .line 533
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    const/4 v1, 0x2

    .line 3106
    invoke-virtual {p1, v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void
.end method

.method private p()V
    .locals 1

    const/4 v0, 0x1

    .line 123
    iput-boolean v0, p0, Lcom/tkay/core/common/h/a;->n:Z

    return-void
.end method

.method private q()V
    .locals 2

    .line 666
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->m()I

    move-result v0

    const/16 v1, 0x8

    and-int/2addr v0, v1

    if-ne v0, v1, :cond_0

    .line 668
    invoke-static {}, Lcom/tkay/core/common/e/a;->a()Lcom/tkay/core/common/e/a;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/core/common/h/a;->o:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/e/a;->b(Ljava/lang/String;)V

    :cond_0
    return-void
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

.method protected final a(IILjava/lang/String;Lcom/tkay/core/api/AdError;)V
    .locals 1

    .line 564
    iget-object v0, p0, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v0, :cond_0

    .line 565
    invoke-interface {v0, p1, p3, p4}, Lcom/tkay/core/common/h/k;->onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 567
    :cond_0
    invoke-virtual {p0, p4}, Lcom/tkay/core/common/h/a;->b(Lcom/tkay/core/api/AdError;)V

    .line 570
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/h/a;->b(I)V

    return-void
.end method

.method public a(ILcom/tkay/core/common/h/k;)V
    .locals 1

    const/4 v0, 0x0

    .line 113
    iput-boolean v0, p0, Lcom/tkay/core/common/h/a;->n:Z

    .line 115
    iput-object p2, p0, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    .line 1263
    new-instance p2, Lcom/tkay/core/common/h/a$1;

    invoke-direct {p2, p0, p1}, Lcom/tkay/core/common/h/a$1;-><init>(Lcom/tkay/core/common/h/a;I)V

    .line 1529
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->o()Z

    move-result p1

    if-eqz p1, :cond_0

    .line 1531
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    const/4 v0, 0x1

    invoke-virtual {p1, p2, v0}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void

    .line 1533
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    const/4 v0, 0x2

    .line 2106
    invoke-virtual {p1, p2, v0}, Lcom/tkay/core/common/l/b/a;->a(Lcom/tkay/core/common/l/b/b;I)V

    return-void
.end method

.method protected a(ILjava/lang/Object;)V
    .locals 1

    .line 581
    iget-object v0, p0, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v0, :cond_0

    .line 582
    invoke-interface {v0, p1, p2}, Lcom/tkay/core/common/h/k;->onLoadFinish(ILjava/lang/Object;)V

    :cond_0
    return-void
.end method

.method protected final a(ILorg/apache/http/conn/ConnectTimeoutException;)V
    .locals 2

    .line 551
    invoke-virtual {p2}, Lorg/apache/http/conn/ConnectTimeoutException;->getMessage()Ljava/lang/String;

    move-result-object p2

    const-string v0, "9999"

    .line 552
    invoke-static {v0, v0, p2}, Lcom/tkay/core/api/ErrorCode;->getErrorCode(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/core/api/AdError;

    move-result-object p2

    .line 554
    iget-object v0, p0, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v0, :cond_0

    const-string v1, "Connect timeout."

    .line 555
    invoke-interface {v0, p1, v1, p2}, Lcom/tkay/core/common/h/k;->onLoadError(ILjava/lang/String;Lcom/tkay/core/api/AdError;)V

    .line 557
    :cond_0
    invoke-virtual {p0, p2}, Lcom/tkay/core/common/h/a;->b(Lcom/tkay/core/api/AdError;)V

    const/16 p1, -0x3e9

    .line 560
    invoke-virtual {p0, p1}, Lcom/tkay/core/common/h/a;->b(I)V

    return-void
.end method

.method protected abstract a(Lcom/tkay/core/api/AdError;)V
.end method

.method protected abstract a(I)Z
.end method

.method protected abstract b()Ljava/lang/String;
.end method

.method protected b(I)V
    .locals 0

    return-void
.end method

.method protected abstract b(Lcom/tkay/core/api/AdError;)V
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

.method protected final c(I)V
    .locals 1

    .line 574
    iget-object v0, p0, Lcom/tkay/core/common/h/a;->m:Lcom/tkay/core/common/h/k;

    if-eqz v0, :cond_0

    .line 575
    invoke-interface {v0, p1}, Lcom/tkay/core/common/h/k;->onLoadCanceled(I)V

    :cond_0
    return-void
.end method

.method protected abstract d()[B
.end method

.method protected e()Lorg/json/JSONObject;
    .locals 1

    .line 191
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->m()I

    move-result v0

    invoke-static {v0}, Lcom/tkay/core/common/h/c;->a(I)Lorg/json/JSONObject;

    move-result-object v0

    return-object v0
.end method

.method protected f()Lorg/json/JSONObject;
    .locals 1

    .line 200
    invoke-static {}, Lcom/tkay/core/common/h/c;->a()Lorg/json/JSONObject;

    move-result-object v0

    return-object v0
.end method

.method protected g()Ljava/lang/String;
    .locals 5

    .line 205
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 206
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->e()Lorg/json/JSONObject;

    move-result-object v1

    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    .line 207
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->f()Lorg/json/JSONObject;

    move-result-object v2

    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/tkay/core/common/l/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    const-string v3, "api_ver"

    const-string v4, "1.0"

    .line 209
    invoke-interface {v0, v3, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v3, "p"

    .line 210
    invoke-interface {v0, v3, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "p2"

    .line 211
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 215
    new-instance v1, Ljava/util/ArrayList;

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v2

    invoke-direct {v1, v2}, Ljava/util/ArrayList;-><init>(I)V

    .line 216
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    .line 217
    invoke-static {v1}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 219
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 220
    invoke-interface {v1}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 221
    invoke-virtual {v2}, Ljava/lang/StringBuilder;->length()I

    move-result v4

    if-lez v4, :cond_0

    const-string v4, "&"

    .line 222
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 224
    :cond_0
    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "="

    .line 225
    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 226
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    goto :goto_0

    .line 229
    :cond_1
    new-instance v1, Ljava/lang/StringBuilder;

    const-string v3, " sorted value list:"

    invoke-direct {v1, v3}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 231
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->j()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/tkay/core/common/l/f;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "sign"

    .line 232
    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 234
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->l()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_2

    .line 236
    invoke-virtual {p0}, Lcom/tkay/core/common/h/a;->l()Ljava/util/Map;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->putAll(Ljava/util/Map;)V

    .line 239
    :cond_2
    invoke-interface {v0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    .line 240
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    .line 242
    :try_start_0
    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_1
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    .line 243
    invoke-interface {v0, v3}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    invoke-static {v4}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    goto :goto_1

    .line 245
    :cond_3
    invoke-virtual {v2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/OutOfMemoryError; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 249
    :catch_0
    invoke-static {}, Ljava/lang/System;->gc()V

    :catch_1
    const/4 v0, 0x0

    return-object v0
.end method

.method protected abstract h()Ljava/lang/String;
.end method

.method protected abstract i()Landroid/content/Context;
.end method

.method protected abstract j()Ljava/lang/String;
.end method

.method protected abstract k()Ljava/lang/String;
.end method

.method protected abstract l()Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end method

.method protected m()I
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected n()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method protected o()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method
