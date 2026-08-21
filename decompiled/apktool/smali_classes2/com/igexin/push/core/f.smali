.class public Lcom/igexin/push/core/f;
.super Landroid/os/HandlerThread;


# direct methods
.method public constructor <init>()V
    .locals 1

    const-string v0, "CoreThread"

    invoke-direct {p0, v0}, Landroid/os/HandlerThread;-><init>(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method protected onLooperPrepared()V
    .locals 1

    invoke-static {}, Lcom/igexin/push/core/c;->a()Lcom/igexin/push/core/c;

    move-result-object v0

    invoke-virtual {v0}, Lcom/igexin/push/core/c;->c()V

    return-void
.end method
