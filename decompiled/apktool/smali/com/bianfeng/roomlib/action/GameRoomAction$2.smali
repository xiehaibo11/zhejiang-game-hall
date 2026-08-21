.class Lcom/bianfeng/roomlib/action/GameRoomAction$2;
.super Ljava/lang/Thread;
.source "GameRoomAction.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/action/GameRoomAction;->startActionGet(Lcom/bianfeng/roomlib/action/ActionCallback;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/roomlib/action/GameRoomAction;


# direct methods
.method constructor <init>(Lcom/bianfeng/roomlib/action/GameRoomAction;)V
    .locals 0

    .line 148
    iput-object p1, p0, Lcom/bianfeng/roomlib/action/GameRoomAction$2;->this$0:Lcom/bianfeng/roomlib/action/GameRoomAction;

    invoke-direct {p0}, Ljava/lang/Thread;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 151
    iget-object v0, p0, Lcom/bianfeng/roomlib/action/GameRoomAction$2;->this$0:Lcom/bianfeng/roomlib/action/GameRoomAction;

    invoke-static {v0}, Lcom/bianfeng/roomlib/action/GameRoomAction;->access$100(Lcom/bianfeng/roomlib/action/GameRoomAction;)V

    return-void
.end method
