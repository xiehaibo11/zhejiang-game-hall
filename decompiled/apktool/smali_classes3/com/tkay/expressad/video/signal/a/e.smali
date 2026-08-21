.class public Lcom/tkay/expressad/video/signal/a/e;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/video/signal/g;


# static fields
.field protected static final m:Ljava/lang/String; = "DefaultJSNotifyProxy"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 7
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 0

    return-void
.end method

.method public a(I)V
    .locals 0

    return-void
.end method

.method public a(IIII)V
    .locals 0

    return-void
.end method

.method public a(ILjava/lang/String;)V
    .locals 2

    .line 22
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onClick:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, ",pt:"

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public a(Lcom/tkay/expressad/video/module/TkayVideoView$a;)V
    .locals 2

    .line 27
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onProgressNotify:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/expressad/video/module/TkayVideoView$a;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    return-void
.end method

.method public a(Ljava/lang/Object;)V
    .locals 2

    .line 32
    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onWebviewShow:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    return-void
.end method
