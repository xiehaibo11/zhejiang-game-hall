.class final Lcom/tkay/core/activity/TYGdprAuthActivity$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/activity/component/PrivacyPolicyView$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/activity/TYGdprAuthActivity;->onCreate(Landroid/os/Bundle;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/activity/TYGdprAuthActivity;


# direct methods
.method constructor <init>(Lcom/tkay/core/activity/TYGdprAuthActivity;)V
    .locals 0

    .line 42
    iput-object p1, p0, Lcom/tkay/core/activity/TYGdprAuthActivity$1;->a:Lcom/tkay/core/activity/TYGdprAuthActivity;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onLevelSelect(I)V
    .locals 1

    .line 45
    sget-object v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->mCallback:Lcom/tkay/core/api/TYGDPRAuthCallback;

    if-eqz v0, :cond_0

    .line 46
    sget-object v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->mCallback:Lcom/tkay/core/api/TYGDPRAuthCallback;

    invoke-interface {v0, p1}, Lcom/tkay/core/api/TYGDPRAuthCallback;->onAuthResult(I)V

    const/4 p1, 0x0

    .line 47
    sput-object p1, Lcom/tkay/core/activity/TYGdprAuthActivity;->mCallback:Lcom/tkay/core/api/TYGDPRAuthCallback;

    .line 49
    :cond_0
    iget-object p1, p0, Lcom/tkay/core/activity/TYGdprAuthActivity$1;->a:Lcom/tkay/core/activity/TYGdprAuthActivity;

    invoke-virtual {p1}, Lcom/tkay/core/activity/TYGdprAuthActivity;->finish()V

    return-void
.end method

.method public final onPageLoadFail()V
    .locals 2

    .line 54
    iget-object v0, p0, Lcom/tkay/core/activity/TYGdprAuthActivity$1;->a:Lcom/tkay/core/activity/TYGdprAuthActivity;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->c:Z

    .line 55
    sget-object v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->mCallback:Lcom/tkay/core/api/TYGDPRAuthCallback;

    if-eqz v0, :cond_0

    .line 56
    sget-object v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->mCallback:Lcom/tkay/core/api/TYGDPRAuthCallback;

    invoke-interface {v0}, Lcom/tkay/core/api/TYGDPRAuthCallback;->onPageLoadFail()V

    :cond_0
    return-void
.end method

.method public final onPageLoadSuccess()V
    .locals 2

    .line 62
    iget-object v0, p0, Lcom/tkay/core/activity/TYGdprAuthActivity$1;->a:Lcom/tkay/core/activity/TYGdprAuthActivity;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->c:Z

    return-void
.end method
