.class public Lcom/qihoo360/loader2/StubProcessManager$StubProcessState;
.super Ljava/lang/Object;
.source "StubProcessManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/StubProcessManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "StubProcessState"
.end annotation


# static fields
.field public static final STATE_ALLOCATED:I = 0x1

.field public static final STATE_RUNNING:I = 0x2

.field public static final STATE_STOPED:I = 0x4

.field public static final STATE_UNUSED:I


# instance fields
.field final synthetic this$0:Lcom/qihoo360/loader2/StubProcessManager;


# direct methods
.method public constructor <init>(Lcom/qihoo360/loader2/StubProcessManager;)V
    .locals 0

    .line 418
    iput-object p1, p0, Lcom/qihoo360/loader2/StubProcessManager$StubProcessState;->this$0:Lcom/qihoo360/loader2/StubProcessManager;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
