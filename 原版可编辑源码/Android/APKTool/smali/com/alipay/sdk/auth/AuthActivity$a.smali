.class final Lcom/alipay/sdk/auth/AuthActivity$a;
.super Ljava/lang/Object;
.source "SourceFile"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/alipay/sdk/auth/AuthActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "a"
.end annotation


# instance fields
.field private final a:Ljava/lang/ref/WeakReference;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/lang/ref/WeakReference<",
            "Lcom/alipay/sdk/auth/AuthActivity;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>(Lcom/alipay/sdk/auth/AuthActivity;)V
    .locals 1

    .line 365
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 366
    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    iput-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity$a;->a:Ljava/lang/ref/WeakReference;

    return-void
.end method

.method synthetic constructor <init>(Lcom/alipay/sdk/auth/AuthActivity;Lcom/alipay/sdk/auth/a;)V
    .locals 0

    .line 361
    invoke-direct {p0, p1}, Lcom/alipay/sdk/auth/AuthActivity$a;-><init>(Lcom/alipay/sdk/auth/AuthActivity;)V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 371
    iget-object v0, p0, Lcom/alipay/sdk/auth/AuthActivity$a;->a:Ljava/lang/ref/WeakReference;

    invoke-virtual {v0}, Ljava/lang/ref/WeakReference;->get()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/alipay/sdk/auth/AuthActivity;

    if-eqz v0, :cond_0

    .line 373
    invoke-static {v0}, Lcom/alipay/sdk/auth/AuthActivity;->e(Lcom/alipay/sdk/auth/AuthActivity;)V

    :cond_0
    return-void
.end method
