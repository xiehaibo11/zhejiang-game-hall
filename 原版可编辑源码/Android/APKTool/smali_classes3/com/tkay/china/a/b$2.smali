.class final Lcom/tkay/china/a/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/china/a/b;->c(Landroid/content/Context;Lcom/tkay/china/a/a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/china/a/a;


# direct methods
.method constructor <init>(Landroid/content/Context;Lcom/tkay/china/a/a;)V
    .locals 0

    .line 175
    iput-object p1, p0, Lcom/tkay/china/a/b$2;->a:Landroid/content/Context;

    iput-object p2, p0, Lcom/tkay/china/a/b$2;->b:Lcom/tkay/china/a/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 179
    :try_start_0
    iget-object v0, p0, Lcom/tkay/china/a/b$2;->a:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    new-instance v1, Lcom/tkay/china/a/b$2$1;

    invoke-direct {v1, p0}, Lcom/tkay/china/a/b$2$1;-><init>(Lcom/tkay/china/a/b$2;)V

    invoke-static {v0, v1}, Lcom/tkay/china/api/TYChinaSDKHandler;->handleInitOaidSDK(Landroid/content/Context;Lcom/tkay/china/api/OaidSDKCallbackListener;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
