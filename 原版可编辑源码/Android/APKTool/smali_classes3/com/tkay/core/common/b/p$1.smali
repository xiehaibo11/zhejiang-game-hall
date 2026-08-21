.class final Lcom/tkay/core/common/b/p$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/p;->a(Landroid/content/Context;Lcom/tkay/core/api/TYGDPRAuthCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/api/TYGDPRAuthCallback;

.field final synthetic b:Landroid/content/Context;

.field final synthetic c:Lcom/tkay/core/common/b/p;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/p;Lcom/tkay/core/api/TYGDPRAuthCallback;Landroid/content/Context;)V
    .locals 0

    .line 167
    iput-object p1, p0, Lcom/tkay/core/common/b/p$1;->c:Lcom/tkay/core/common/b/p;

    iput-object p2, p0, Lcom/tkay/core/common/b/p$1;->a:Lcom/tkay/core/api/TYGDPRAuthCallback;

    iput-object p3, p0, Lcom/tkay/core/common/b/p$1;->b:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 170
    iget-object v0, p0, Lcom/tkay/core/common/b/p$1;->a:Lcom/tkay/core/api/TYGDPRAuthCallback;

    sput-object v0, Lcom/tkay/core/activity/TYGdprAuthActivity;->mCallback:Lcom/tkay/core/api/TYGDPRAuthCallback;

    .line 171
    new-instance v0, Landroid/content/Intent;

    iget-object v1, p0, Lcom/tkay/core/common/b/p$1;->b:Landroid/content/Context;

    const-class v2, Lcom/tkay/core/activity/TYGdprAuthActivity;

    invoke-direct {v0, v1, v2}, Landroid/content/Intent;-><init>(Landroid/content/Context;Ljava/lang/Class;)V

    const/high16 v1, 0x10000000

    .line 172
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setFlags(I)Landroid/content/Intent;

    .line 173
    iget-object v1, p0, Lcom/tkay/core/common/b/p$1;->b:Landroid/content/Context;

    invoke-virtual {v1, v0}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    return-void
.end method
