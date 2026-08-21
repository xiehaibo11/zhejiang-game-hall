.class public Lcom/igexin/assist/util/AssistUtils;
.super Ljava/lang/Object;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static startGetuiService(Landroid/content/Context;)V
    .locals 1

    if-eqz p0, :cond_0

    :try_start_0
    invoke-static {}, Lcom/igexin/sdk/PushManager;->getInstance()Lcom/igexin/sdk/PushManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/igexin/sdk/PushManager;->initialize(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method
