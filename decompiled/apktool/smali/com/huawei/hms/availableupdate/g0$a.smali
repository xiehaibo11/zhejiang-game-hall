.class public Lcom/huawei/hms/availableupdate/g0$a;
.super Landroid/os/Handler;
.source "SilentUpdateWizard.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/huawei/hms/availableupdate/g0;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/huawei/hms/availableupdate/g0;


# direct methods
.method public constructor <init>(Lcom/huawei/hms/availableupdate/g0;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/huawei/hms/availableupdate/g0$a;->a:Lcom/huawei/hms/availableupdate/g0;

    invoke-direct {p0}, Landroid/os/Handler;-><init>()V

    return-void
.end method


# virtual methods
.method public handleMessage(Landroid/os/Message;)V
    .locals 2

    .line 1
    iget-object v0, p1, Landroid/os/Message;->obj:Ljava/lang/Object;

    check-cast v0, Landroid/os/Bundle;

    .line 2
    new-instance v1, Lcom/huawei/hms/ui/SafeBundle;

    invoke-direct {v1, v0}, Lcom/huawei/hms/ui/SafeBundle;-><init>(Landroid/os/Bundle;)V

    .line 4
    iget p1, p1, Landroid/os/Message;->what:I

    packed-switch p1, :pswitch_data_0

    goto :goto_0

    .line 14
    :pswitch_0
    iget-object p1, p0, Lcom/huawei/hms/availableupdate/g0$a;->a:Lcom/huawei/hms/availableupdate/g0;

    invoke-static {p1, v1}, Lcom/huawei/hms/availableupdate/g0;->c(Lcom/huawei/hms/availableupdate/g0;Lcom/huawei/hms/ui/SafeBundle;)V

    goto :goto_0

    .line 15
    :pswitch_1
    iget-object p1, p0, Lcom/huawei/hms/availableupdate/g0$a;->a:Lcom/huawei/hms/availableupdate/g0;

    invoke-static {p1, v1}, Lcom/huawei/hms/availableupdate/g0;->b(Lcom/huawei/hms/availableupdate/g0;Lcom/huawei/hms/ui/SafeBundle;)V

    goto :goto_0

    .line 16
    :pswitch_2
    iget-object p1, p0, Lcom/huawei/hms/availableupdate/g0$a;->a:Lcom/huawei/hms/availableupdate/g0;

    invoke-static {p1, v1}, Lcom/huawei/hms/availableupdate/g0;->a(Lcom/huawei/hms/availableupdate/g0;Lcom/huawei/hms/ui/SafeBundle;)V

    :goto_0
    return-void

    nop

    :pswitch_data_0
    .packed-switch 0x65
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
