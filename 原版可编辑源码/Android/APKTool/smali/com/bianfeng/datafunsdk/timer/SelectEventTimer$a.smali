.class public Lcom/bianfeng/datafunsdk/timer/SelectEventTimer$a;
.super Ljava/lang/Object;
.source "SelectEventTimer.java"

# interfaces
.implements Lcom/bianfeng/datafunsdk/timer/HandlerTimer$TimeCallback;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->start()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = null
.end annotation


# instance fields
.field public final synthetic a:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;


# direct methods
.method public constructor <init>(Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;)V
    .locals 0

    .line 1
    iput-object p1, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onCall(ILjava/lang/String;)V
    .locals 0

    .line 1
    iget-object p1, p0, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer$a;->a:Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;

    invoke-static {p1}, Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;->access$000(Lcom/bianfeng/datafunsdk/timer/SelectEventTimer;)Lcom/bianfeng/datafunsdk/a;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/datafunsdk/a;->a()V

    return-void
.end method
