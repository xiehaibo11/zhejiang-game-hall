.class Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;
.super Ljava/lang/Object;
.source "GameRoomWebRequest.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->onSuccess(Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

.field final synthetic val$entity:Ljava/lang/String;


# direct methods
.method constructor <init>(Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;Ljava/lang/String;)V
    .locals 0

    .line 94
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;->this$0:Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

    iput-object p2, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;->val$entity:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 2

    .line 97
    iget-object v0, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;->this$0:Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;

    iget-object v0, v0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2;->val$callback:Lcom/bianfeng/roomlib/ui/WebCallBack;

    iget-object v1, p0, Lcom/bianfeng/roomlib/ui/GameRoomWebRequest$2$1;->val$entity:Ljava/lang/String;

    invoke-interface {v0, v1}, Lcom/bianfeng/roomlib/ui/WebCallBack;->sendDataToWeb(Ljava/lang/String;)V

    return-void
.end method
