.class final Lcom/tkay/expressad/out/LoadingActivity$2;
.super Landroid/content/BroadcastReceiver;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/out/LoadingActivity;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/out/LoadingActivity;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/out/LoadingActivity;)V
    .locals 0

    .line 50
    iput-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity$2;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-direct {p0}, Landroid/content/BroadcastReceiver;-><init>()V

    return-void
.end method


# virtual methods
.method public final onReceive(Landroid/content/Context;Landroid/content/Intent;)V
    .locals 0

    .line 54
    iget-object p1, p0, Lcom/tkay/expressad/out/LoadingActivity$2;->a:Lcom/tkay/expressad/out/LoadingActivity;

    invoke-virtual {p1}, Lcom/tkay/expressad/out/LoadingActivity;->finish()V

    return-void
.end method
