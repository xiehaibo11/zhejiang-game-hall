.class Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;
.super Ljava/lang/Object;
.source "GameRoomWebRequest.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->onFali(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

.field final synthetic val$errmsg:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;Ljava/lang/String;)V
    .locals 0

    .line 103
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;->this$0:Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

    iput-object p2, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;->val$errmsg:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 3

    .line 106
    invoke-static {}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getInstance()Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/roomlib/YmnH5GameRoomSdk;->getCallback()Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;->val$errmsg:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/roomlib/YmnH5GameRoomCallback;->onFail(Ljava/lang/String;)V

    .line 107
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;->this$0:Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

    iget-object v0, v0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->val$context:Landroid/app/Activity;

    iget-object v1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$2;->val$errmsg:Ljava/lang/String;

    const/4 v2, 0x0

    invoke-static {v0, v1, v2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object v0

    invoke-virtual {v0}, Landroid/widget/Toast;->show()V

    return-void
.end method
