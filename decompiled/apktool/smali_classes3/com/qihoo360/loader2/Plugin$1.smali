.class Lcom/qihoo360/loader2/Plugin$1;
.super Ljava/lang/Object;
.source "Plugin.java"

# interfaces
.implements Lcom/qihoo360/i/IPlugin;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/Plugin;->loadEntryLocked(Lcom/qihoo360/loader2/PluginCommImpl;)Z
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

    .line 870
    iput-object p1, p0, Lcom/qihoo360/loader2/Plugin$1;->this$0:Lcom/qihoo360/loader2/Plugin;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public query(Ljava/lang/Class;)Lcom/qihoo360/i/IModule;
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/qihoo360/i/IModule;",
            ">;)",
            "Lcom/qihoo360/i/IModule;"
        }
    .end annotation

    const/4 p1, 0x0

    return-object p1
.end method
