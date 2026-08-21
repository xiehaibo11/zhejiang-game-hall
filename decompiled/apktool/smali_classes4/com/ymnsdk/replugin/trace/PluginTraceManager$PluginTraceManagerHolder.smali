.class final Lcom/ymnsdk/replugin/trace/PluginTraceManager$PluginTraceManagerHolder;
.super Ljava/lang/Object;
.source "PluginTraceManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/trace/PluginTraceManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "PluginTraceManagerHolder"
.end annotation


# static fields
.field static final PLUGIN_TRACE_MANAGER:Lcom/ymnsdk/replugin/trace/PluginTraceManager;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    .line 39
    new-instance v0, Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Lcom/ymnsdk/replugin/trace/PluginTraceManager;-><init>(Lcom/ymnsdk/replugin/trace/PluginTraceManager$1;)V

    sput-object v0, Lcom/ymnsdk/replugin/trace/PluginTraceManager$PluginTraceManagerHolder;->PLUGIN_TRACE_MANAGER:Lcom/ymnsdk/replugin/trace/PluginTraceManager;

    return-void
.end method

.method private constructor <init>()V
    .locals 0

    .line 38
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method
