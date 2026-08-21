.class final Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;
.super Ljava/lang/Object;
.source "GameRoomWebRequest.java"

# interfaces
.implements Lcom/bianfeng/roomlib/action/ActionCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/ui/GameRoomWebRequest;->startRequestWeb(Landroid/app/Activity;Ljava/util/TreeMap;Lcom/bianfeng/roomlib/ui/WebCallBack;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "Ljava/lang/Object;",
        "Lcom/bianfeng/roomlib/action/ActionCallback<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# instance fields
.field final synthetic val$callback:Lcom/bianfeng/roomlib/ui/WebCallBack;

.field final synthetic val$context:Landroid/app/Activity;


# direct methods
.method constructor <init>(Landroid/app/Activity;Lcom/bianfeng/roomlib/ui/WebCallBack;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->val$context:Landroid/app/Activity;

    iput-object p2, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->val$callback:Lcom/bianfeng/roomlib/ui/WebCallBack;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onFali(Ljava/lang/String;)V
    .locals 2

    .line 103
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->val$context:Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;-><init>(Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method

.method public bridge synthetic onSuccess(Ljava/lang/Object;)V
    .locals 0

    .line 91
    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->onSuccess(Ljava/lang/String;)V

    return-void
.end method

.method public onSuccess(Ljava/lang/String;)V
    .locals 2

    .line 94
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->val$context:Landroid/app/Activity;

    new-instance v1, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;

    invoke-direct {v1, p0, p1}, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;-><init>(Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Landroid/app/Activity;->runOnUiThread(Ljava/lang/Runnable;)V

    return-void
.end method
