.class final Lcom/kwad/sdk/ranger/a$1;
.super Lcom/kwad/sdk/core/c/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/sdk/ranger/a;->a(Lcom/kwad/sdk/ranger/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# instance fields
.field final synthetic aGz:Ljava/util/List;


# direct methods
.method constructor <init>(Ljava/util/List;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/ranger/a$1;->aGz:Ljava/util/List;

    invoke-direct {p0}, Lcom/kwad/sdk/core/c/d;-><init>()V

    return-void
.end method


# virtual methods
.method public final synthetic a(Ljava/lang/Object;Landroid/os/Bundle;)V
    .locals 0

    check-cast p1, Landroid/app/Activity;

    invoke-virtual {p0, p1, p2}, Lcom/kwad/sdk/ranger/a$1;->onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V

    return-void
.end method

.method public final onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    invoke-super {p0, p1, p2}, Lcom/kwad/sdk/core/c/d;->onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V

    :try_start_0
    iget-object p2, p0, Lcom/kwad/sdk/ranger/a$1;->aGz:Ljava/util/List;

    invoke-static {p1, p2}, Lcom/kwad/sdk/ranger/a;->a(Landroid/app/Activity;Ljava/util/List;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    sget-object p2, Lcom/kwad/sdk/ranger/a;->TAG:Ljava/lang/String;

    invoke-static {p1}, Landroid/util/Log;->getStackTraceString(Ljava/lang/Throwable;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/kwad/sdk/core/e/c;->e(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
