.class public interface abstract Lcom/bykv/vk/openvk/TTVfManager;
.super Ljava/lang/Object;


# virtual methods
.method public abstract createVfNative(Landroid/content/Context;)Lcom/bykv/vk/openvk/TTVfNative;
.end method

.method public abstract getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;)Ljava/lang/String;
.end method

.method public abstract getBiddingToken(Lcom/bykv/vk/openvk/VfSlot;ZI)Ljava/lang/String;
.end method

.method public abstract getExtra(Ljava/lang/Class;Landroid/os/Bundle;)Ljava/lang/Object;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Ljava/lang/Class<",
            "TT;>;",
            "Landroid/os/Bundle;",
            ")TT;"
        }
    .end annotation
.end method

.method public abstract getPluginVersion()Ljava/lang/String;
.end method

.method public abstract getSDKVersion()Ljava/lang/String;
.end method

.method public abstract getThemeStatus()I
.end method

.method public abstract register(Ljava/lang/Object;)V
.end method

.method public abstract requestPermissionIfNecessary(Landroid/content/Context;)V
.end method

.method public abstract setThemeStatus(I)V
.end method

.method public abstract tryShowInstallDialogWhenExit(Landroid/app/Activity;Lcom/bykv/vk/openvk/downloadnew/core/ExitInstallListener;)Z
.end method

.method public abstract unregister(Ljava/lang/Object;)V
.end method
