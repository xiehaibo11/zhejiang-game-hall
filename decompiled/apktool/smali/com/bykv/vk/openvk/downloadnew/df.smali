.class public Lcom/bykv/vk/openvk/downloadnew/df;
.super Ljava/lang/Object;


# direct methods
.method public static rg(I)Landroid/os/Bundle;
    .locals 2

    .line 15
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "type"

    .line 16
    invoke-virtual {v0, v1, p0}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    return-object v0
.end method
