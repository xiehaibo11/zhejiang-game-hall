.class Lcom/qihoo360/loader2/Plugin$2;
.super Ljava/lang/Object;
.source "Plugin.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/Plugin;->callApp()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/qihoo360/loader2/Plugin;


# direct methods
.method constructor <init>(Lcom/qihoo360/loader2/Plugin;)V
    .locals 0

    .line 911
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin$2;->this$0:Lcom/qihoo360/loader2/Plugin;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public run()V
    .locals 1

    .line 914
    iget-object v0, p0, Lcom/qihoo360/loader2/Plugin$2;->this$0:Lcom/qihoo360/loader2/Plugin;

    invoke-static {v0}, Lcom/qihoo360/loader2/Plugin;->access$000(Lcom/qihoo360/loader2/Plugin;)V

    return-void
.end method
