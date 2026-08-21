.class public Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;
.super Ljava/lang/Object;
.source "HandlerTimer.java"

# interfaces
.implements Lcom/bianfeng/datafunsdk/timer/HandlerUtils$HandlerCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/bianfeng/datafunsdk/timer/HandlerTimer;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(ILjava/lang/String;)V
    .locals 2

    .line 1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->access$000(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)I

    move-result v0

    if-ne p1, v0, :cond_3

    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->access$100(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "HandlerCallback:code="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, ";mgs="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    .line 3
    sget-object v0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$b;->a:[I

    iget-object v1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-static {v1}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->access$200(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)Lcom/bianfeng/datafunsdk/timer/LoopType;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Enum;->ordinal()I

    move-result v1

    aget v0, v0, v1

    const/4 v1, 0x1

    if-eq v0, v1, :cond_2

    const/4 v1, 0x2

    if-eq v0, v1, :cond_1

    const/4 v1, 0x3

    if-eq v0, v1, :cond_0

    goto :goto_0

    .line 12
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-static {v0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->access$400(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;ILjava/lang/String;)V

    goto :goto_0

    .line 13
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-static {v0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->access$300(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;ILjava/lang/String;)V

    goto :goto_0

    .line 14
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-static {v0}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->access$100(Lcom/bianfeng/datafunsdk/timer/HandlerTimer;)Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;->onCall(ILjava/lang/String;)V

    .line 15
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/timer/HandlerTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/HandlerTimer;

    invoke-virtual {p1}, Lcom/bianfeng/datafunsdk/timer/HandlerTimer;->onRemove()V

    goto :goto_0

    :cond_3
    nop

    .line 25
    const-string p1, "code \u4e0d\u6b63\u786e \u6216 callback \u4e3a\u7a7a"

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/x;->a(Ljava/lang/String;)V

    :goto_0
    return-void
.end method
