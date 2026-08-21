.class Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;
.super Lcom/mbridge/msdk/thrid/okhttp/EventListener;
.source "OkHttpStack.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "DefaultEventListener"
.end annotation


# instance fields
.field private callDuring:J

.field private callStart:J

.field private connectDuring:J

.field private connectErrorMessage:Ljava/lang/String;

.field private connectStart:J

.field private connectionDuring:J

.field private connectionStart:J

.field private dnsDuring:J

.field private dnsResult:Ljava/lang/String;

.field private dnsStart:J

.field private hostName:Ljava/lang/String;

.field private httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

.field private isReportHttpStatus:Z

.field private method:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 153
    invoke-direct {p0}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;-><init>()V

    .line 155
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a()Lcom/mbridge/msdk/foundation/same/net/stack/b;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a(Ljava/lang/String;)Z

    move-result p1

    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    .line 157
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a()Lcom/mbridge/msdk/foundation/same/net/stack/b;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->c()Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const/4 p1, 0x0

    .line 160
    iput-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    const/4 p1, 0x0

    .line 161
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    :cond_0
    :goto_0
    return-void
.end method


# virtual methods
.method public callEnd(Lcom/mbridge/msdk/thrid/okhttp/Call;)V
    .locals 4

    .line 267
    invoke-super {p0, p1}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->callEnd(Lcom/mbridge/msdk/thrid/okhttp/Call;)V

    .line 270
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/a;->a()Lcom/mbridge/msdk/foundation/same/net/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/a;->c()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 274
    :catch_0
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_0

    .line 276
    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callStart:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callDuring:J

    .line 277
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    const/4 v0, 0x0

    iput v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->a:I

    .line 278
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->method:Ljava/lang/String;

    iput-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->d:Ljava/lang/String;

    .line 279
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->b:J

    .line 280
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->hostName:Ljava/lang/String;

    iput-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->e:Ljava/lang/String;

    .line 281
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->g:J

    .line 282
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsResult:Ljava/lang/String;

    iput-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->h:Ljava/lang/String;

    .line 283
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->i:J

    .line 284
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectionDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->k:J

    .line 285
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a()Lcom/mbridge/msdk/foundation/same/net/stack/b;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a(Lcom/mbridge/msdk/foundation/same/net/stack/b$b;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    move-exception p1

    .line 287
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string v0, "OkHttpStack"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method public callFailed(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/io/IOException;)V
    .locals 4

    .line 294
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->callFailed(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/io/IOException;)V

    .line 296
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/a;->a()Lcom/mbridge/msdk/foundation/same/net/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/same/net/a;->d()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 300
    :catch_0
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_2

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_2

    .line 302
    :try_start_1
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    .line 303
    iget-wide v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callStart:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callDuring:J

    .line 304
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectErrorMessage:Ljava/lang/String;

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1

    if-nez p1, :cond_0

    .line 307
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    const/4 v0, 0x1

    iput v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->a:I

    .line 308
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectErrorMessage:Ljava/lang/String;

    iput-object v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->j:Ljava/lang/String;

    goto :goto_0

    .line 310
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    const/4 v0, 0x2

    iput v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->a:I

    .line 313
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p2

    goto :goto_1

    :cond_1
    const-string p2, "IO Exception"

    :goto_1
    iput-object p2, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->c:Ljava/lang/String;

    .line 314
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->b:J

    .line 315
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->hostName:Ljava/lang/String;

    iput-object p2, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->e:Ljava/lang/String;

    .line 316
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->method:Ljava/lang/String;

    iput-object p2, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->d:Ljava/lang/String;

    .line 317
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->g:J

    .line 318
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsResult:Ljava/lang/String;

    iput-object p2, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->h:Ljava/lang/String;

    .line 319
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->i:J

    .line 320
    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectionDuring:J

    iput-wide v0, p1, Lcom/mbridge/msdk/foundation/same/net/stack/b$b;->k:J

    .line 321
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a()Lcom/mbridge/msdk/foundation/same/net/stack/b;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/foundation/same/net/stack/b;->a(Lcom/mbridge/msdk/foundation/same/net/stack/b$b;)V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_2

    :catch_1
    move-exception p1

    .line 323
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "OkHttpStack"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_2
    return-void
.end method

.method public callStart(Lcom/mbridge/msdk/thrid/okhttp/Call;)V
    .locals 2

    .line 167
    invoke-super {p0, p1}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->callStart(Lcom/mbridge/msdk/thrid/okhttp/Call;)V

    .line 169
    :try_start_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/same/net/a;->a()Lcom/mbridge/msdk/foundation/same/net/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/same/net/a;->b()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    .line 173
    :catch_0
    iget-boolean v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz v0, :cond_0

    .line 174
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->callStart:J

    if-eqz p1, :cond_0

    .line 177
    :try_start_1
    invoke-interface {p1}, Lcom/mbridge/msdk/thrid/okhttp/Call;->request()Lcom/mbridge/msdk/thrid/okhttp/Request;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/thrid/okhttp/Request;->method()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->method:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_0

    :catch_1
    const-string p1, ""

    .line 179
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->method:Ljava/lang/String;

    :cond_0
    :goto_0
    return-void
.end method

.method public connectEnd(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/net/InetSocketAddress;Ljava/net/Proxy;Lcom/mbridge/msdk/thrid/okhttp/Protocol;)V
    .locals 0

    .line 233
    invoke-super {p0, p1, p2, p3, p4}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->connectEnd(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/net/InetSocketAddress;Ljava/net/Proxy;Lcom/mbridge/msdk/thrid/okhttp/Protocol;)V

    .line 234
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_0

    .line 235
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-wide p3, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectStart:J

    sub-long/2addr p1, p3

    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectDuring:J

    const-string p1, ""

    .line 236
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectErrorMessage:Ljava/lang/String;

    :cond_0
    return-void
.end method

.method public connectFailed(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/net/InetSocketAddress;Ljava/net/Proxy;Lcom/mbridge/msdk/thrid/okhttp/Protocol;Ljava/io/IOException;)V
    .locals 0

    .line 242
    invoke-super/range {p0 .. p5}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->connectFailed(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/net/InetSocketAddress;Ljava/net/Proxy;Lcom/mbridge/msdk/thrid/okhttp/Protocol;Ljava/io/IOException;)V

    .line 243
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_1

    .line 244
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-wide p3, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectStart:J

    sub-long/2addr p1, p3

    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectDuring:J

    if-eqz p5, :cond_0

    .line 245
    invoke-virtual {p5}, Ljava/io/IOException;->getMessage()Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_0
    const-string p1, "IO Exception"

    :goto_0
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectErrorMessage:Ljava/lang/String;

    :cond_1
    return-void
.end method

.method public connectStart(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/net/InetSocketAddress;Ljava/net/Proxy;)V
    .locals 0

    .line 224
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->connectStart(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/net/InetSocketAddress;Ljava/net/Proxy;)V

    .line 225
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_0

    .line 226
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectStart:J

    :cond_0
    return-void
.end method

.method public connectionAcquired(Lcom/mbridge/msdk/thrid/okhttp/Call;Lcom/mbridge/msdk/thrid/okhttp/Connection;)V
    .locals 0

    .line 251
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->connectionAcquired(Lcom/mbridge/msdk/thrid/okhttp/Call;Lcom/mbridge/msdk/thrid/okhttp/Connection;)V

    .line 252
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_0

    .line 253
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectionStart:J

    :cond_0
    return-void
.end method

.method public connectionReleased(Lcom/mbridge/msdk/thrid/okhttp/Call;Lcom/mbridge/msdk/thrid/okhttp/Connection;)V
    .locals 2

    .line 259
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->connectionReleased(Lcom/mbridge/msdk/thrid/okhttp/Call;Lcom/mbridge/msdk/thrid/okhttp/Connection;)V

    .line 260
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_0

    .line 261
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iget-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectionStart:J

    sub-long/2addr p1, v0

    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->connectionDuring:J

    :cond_0
    return-void
.end method

.method public dnsEnd(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/lang/String;Ljava/util/List;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/mbridge/msdk/thrid/okhttp/Call;",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Ljava/net/InetAddress;",
            ">;)V"
        }
    .end annotation

    .line 195
    invoke-super {p0, p1, p2, p3}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->dnsEnd(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/lang/String;Ljava/util/List;)V

    .line 196
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_5

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_5

    .line 198
    :try_start_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsStart:J

    sub-long/2addr v0, v2

    iput-wide v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsDuring:J

    .line 199
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p1
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v0, "unKnown"

    if-eqz p1, :cond_0

    .line 200
    :try_start_1
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->hostName:Ljava/lang/String;

    goto :goto_0

    .line 202
    :cond_0
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->hostName:Ljava/lang/String;

    :goto_0
    if-eqz p3, :cond_4

    .line 204
    invoke-interface {p3}, Ljava/util/List;->size()I

    move-result p1

    if-nez p1, :cond_1

    goto :goto_2

    :cond_1
    const/4 p1, 0x0

    .line 207
    invoke-interface {p3, p1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/net/InetAddress;

    if-eqz p1, :cond_3

    .line 208
    invoke-virtual {p1}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    goto :goto_1

    .line 211
    :cond_2
    invoke-virtual {p1}, Ljava/net/InetAddress;->getHostAddress()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsResult:Ljava/lang/String;

    goto :goto_3

    .line 209
    :cond_3
    :goto_1
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsResult:Ljava/lang/String;

    goto :goto_3

    .line 205
    :cond_4
    :goto_2
    iput-object v0, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsResult:Ljava/lang/String;
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_3

    :catch_0
    move-exception p1

    .line 215
    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    const-string p2, "OkHttpStack"

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const-string p1, ""

    .line 216
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->hostName:Ljava/lang/String;

    .line 217
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsResult:Ljava/lang/String;

    :cond_5
    :goto_3
    return-void
.end method

.method public dnsStart(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/lang/String;)V
    .locals 0

    .line 187
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/thrid/okhttp/EventListener;->dnsStart(Lcom/mbridge/msdk/thrid/okhttp/Call;Ljava/lang/String;)V

    .line 188
    iget-boolean p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->isReportHttpStatus:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->httpStatus:Lcom/mbridge/msdk/foundation/same/net/stack/b$b;

    if-eqz p1, :cond_0

    .line 189
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide p1

    iput-wide p1, p0, Lcom/mbridge/msdk/foundation/same/net/stack/OkHttpStack$DefaultEventListener;->dnsStart:J

    :cond_0
    return-void
.end method
