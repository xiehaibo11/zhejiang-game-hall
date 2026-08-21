.class public Lcom/tkay/expressad/video/signal/a/c$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/signal/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/video/signal/a/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 371
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a(ILjava/lang/String;)V
    .locals 2

    .line 431
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onH5Error,code:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, "\uff0cmsg:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V
    .locals 2

    .line 391
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onStartRedirection,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ",url:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public a(Lcom/tkay/expressad/foundation/d/c;Z)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/out/d;)V
    .locals 2

    .line 381
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onShowLoading,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public a(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 2

    .line 396
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onFinishRedirection,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ",url:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public final a()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final b(Lcom/tkay/expressad/out/d;)V
    .locals 2

    .line 386
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onDismissLoading,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public b(Lcom/tkay/expressad/out/d;Ljava/lang/String;)V
    .locals 2

    .line 401
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onFinishRedirection,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, ",url:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method public final c(Lcom/tkay/expressad/out/d;)V
    .locals 2

    .line 406
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onDownloadStart,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public d()V
    .locals 0

    return-void
.end method

.method public final d(Lcom/tkay/expressad/out/d;)V
    .locals 2

    .line 411
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onDownloadFinish,campaign:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method
