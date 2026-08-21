.class Lcom/ymnsdk/replugin/YmnRepluginApplication$HostCallbacks;
.super Lcom/qihoo360/replugin/RePluginCallbacks;
.source "YmnRepluginApplication.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/ymnsdk/replugin/YmnRepluginApplication;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x2
    name = "HostCallbacks"
.end annotation


# static fields
.field private static final TAG:Ljava/lang/String; = "HostCallbacks"


# instance fields
.field final synthetic this$0:Lcom/ymnsdk/replugin/YmnRepluginApplication;


# direct methods
.method private constructor <init>(Lcom/ymnsdk/replugin/YmnRepluginApplication;Landroid/content/Context;)V
    .locals 0

    .line 147
    iput-object p1, p0, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostCallbacks;->this$0:Lcom/ymnsdk/replugin/YmnRepluginApplication;

    .line 148
    invoke-direct {p0, p2}, Lcom/qihoo360/replugin/RePluginCallbacks;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method synthetic constructor <init>(Lcom/ymnsdk/replugin/YmnRepluginApplication;Landroid/content/Context;Lcom/ymnsdk/replugin/YmnRepluginApplication$1;)V
    .locals 0

    .line 143
    invoke-direct {p0, p1, p2}, Lcom/ymnsdk/replugin/YmnRepluginApplication$HostCallbacks;-><init>(Lcom/ymnsdk/replugin/YmnRepluginApplication;Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public onPluginNotExistsForActivity(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;I)Z
    .locals 2

    .line 156
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPluginNotExistsForActivity: Start download... p="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "; i="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "HostCallbacks"

    invoke-static {v1, v0}, Landroid/util/Log;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 158
    invoke-super {p0, p1, p2, p3, p4}, Lcom/qihoo360/replugin/RePluginCallbacks;->onPluginNotExistsForActivity(Landroid/content/Context;Ljava/lang/String;Landroid/content/Intent;I)Z

    move-result p1

    return p1
.end method
