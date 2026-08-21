.class public interface abstract Lcom/bykv/vk/openvk/downloadnew/core/ITTDownloadVisitor;
.super Ljava/lang/Object;


# static fields
.field public static final TYPE_TT_DOWNLOAD_VISITOR:I = 0x1


# virtual methods
.method public abstract checkAutoControl(Lorg/json/JSONObject;Ljava/lang/String;)V
.end method

.method public abstract clearAllData(Ljava/lang/String;)V
.end method

.method public abstract execute(ILjava/lang/String;Ljava/util/Map;Lcom/bykv/vk/openvk/downloadnew/core/ITTHttpCallback;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(I",
            "Ljava/lang/String;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/bykv/vk/openvk/downloadnew/core/ITTHttpCallback;",
            ")V"
        }
    .end annotation
.end method

.method public abstract executeLogUpload(Lcom/bykv/vk/openvk/downloadnew/core/TTDownloadEventModel;Z)V
.end method

.method public abstract getAppIsBackground()Z
.end method

.method public abstract getDownloadSettings()Lorg/json/JSONObject;
.end method

.method public abstract getTTDownloadEventLogger()Lcom/bykv/vk/openvk/TTDownloadEventLogger;
.end method

.method public abstract hasPermission(Landroid/content/Context;Ljava/lang/String;)Z
.end method

.method public abstract initPath(Z)Ljava/lang/String;
.end method

.method public abstract isOpenSdkEvent(Ljava/lang/String;)Z
.end method

.method public abstract postBody(Ljava/lang/String;[BLjava/lang/String;Lcom/bykv/vk/openvk/downloadnew/core/ITTHttpCallback;)V
.end method

.method public abstract requestPermission(Landroid/app/Activity;[Ljava/lang/String;Lcom/bykv/vk/openvk/downloadnew/core/ITTPermissionCallback;)V
.end method

.method public abstract showDialogByDelegate(Ljava/lang/ref/WeakReference;ZLcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;)V
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/ref/WeakReference<",
            "Landroid/content/Context;",
            ">;Z",
            "Lcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;",
            ")V"
        }
    .end annotation
.end method

.method public abstract showDialogBySelf(Landroid/app/Activity;ZLcom/bykv/vk/openvk/downloadnew/core/DialogBuilder;)Landroid/app/AlertDialog;
.end method
