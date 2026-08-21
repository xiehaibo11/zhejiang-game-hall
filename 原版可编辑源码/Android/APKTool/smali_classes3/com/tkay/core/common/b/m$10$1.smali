.class final Lcom/tkay/core/common/b/m$10$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m$10;->onReceive(Landroid/content/Context;Landroid/content/Intent;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/b/m$10;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m$10;)V
    .locals 0

    .line 1001
    iput-object p1, p0, Lcom/tkay/core/common/b/m$10$1;->a:Lcom/tkay/core/common/b/m$10;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 1

    .line 1004
    invoke-static {}, Lcom/tkay/core/common/u;->a()Lcom/tkay/core/common/u;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/u;->b()V

    return-void
.end method
