.class Lcom/qihoo360/loader2/PluginIntent;
.super Ljava/lang/Object;
.source "PluginIntent.java"


# static fields
.field public static final EXTRA_ACTIVITY:Ljava/lang/String; = "activity:"

.field public static final EXTRA_CONTAINER:Ljava/lang/String; = "container:"

.field public static final EXTRA_COUNTER:Ljava/lang/String; = "counter:"

.field public static final EXTRA_PLUGIN:Ljava/lang/String; = "plugin:"

.field public static final EXTRA_PROCESS:Ljava/lang/String; = "process:"


# instance fields
.field private final mIntent:Landroid/content/Intent;


# direct methods
.method constructor <init>(Landroid/content/Intent;)V
    .locals 0

    .line 48
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 49
    iput-object p1, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    return-void
.end method

.method private final getI(Ljava/lang/String;I)I
    .locals 3

    .line 82
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    invoke-virtual {v0}, Landroid/content/Intent;->getCategories()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 85
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 86
    invoke-virtual {v1, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 87
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    goto :goto_0

    :cond_1
    const-string p1, ""

    .line 91
    :goto_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 93
    :try_start_0
    invoke-static {p1}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p1

    :catchall_0
    move-exception p1

    .line 97
    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_2
    return p2
.end method

.method private final getS(Ljava/lang/String;)Ljava/lang/String;
    .locals 3

    .line 65
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    invoke-virtual {v0}, Landroid/content/Intent;->getCategories()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 67
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 68
    invoke-virtual {v1, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 69
    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result p1

    invoke-virtual {v1, p1}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object p1

    return-object p1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private final remove(Ljava/lang/String;)V
    .locals 3

    .line 53
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    invoke-virtual {v0}, Landroid/content/Intent;->getCategories()Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 55
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 56
    invoke-virtual {v1, p1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 57
    iget-object p1, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    invoke-virtual {p1, v1}, Landroid/content/Intent;->removeCategory(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private final setI(Ljava/lang/String;I)V
    .locals 2

    .line 106
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PluginIntent;->remove(Ljava/lang/String;)V

    .line 107
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    return-void
.end method

.method private final setS(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 77
    invoke-direct {p0, p1}, Lcom/qihoo360/loader2/PluginIntent;->remove(Ljava/lang/String;)V

    .line 78
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->addCategory(Ljava/lang/String;)Landroid/content/Intent;

    return-void
.end method


# virtual methods
.method final getActivity()Ljava/lang/String;
    .locals 1

    const-string v0, "activity:"

    .line 130
    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/PluginIntent;->getS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method final getContainer()Ljava/lang/String;
    .locals 1

    const-string v0, "container:"

    .line 146
    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/PluginIntent;->getS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method final getCounter()I
    .locals 2

    const-string v0, "counter:"

    const/4 v1, 0x0

    .line 154
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/loader2/PluginIntent;->getI(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method final getOriginal()Ljava/lang/String;
    .locals 1

    .line 114
    iget-object v0, p0, Lcom/qihoo360/loader2/PluginIntent;->mIntent:Landroid/content/Intent;

    invoke-virtual {v0}, Landroid/content/Intent;->getComponent()Landroid/content/ComponentName;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 116
    invoke-virtual {v0}, Landroid/content/ComponentName;->getClassName()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const/4 v0, 0x0

    return-object v0
.end method

.method final getPlugin()Ljava/lang/String;
    .locals 1

    const-string v0, "plugin:"

    .line 122
    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/PluginIntent;->getS(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method final getProcess()I
    .locals 2

    const-string v0, "process:"

    const/high16 v1, -0x80000000

    .line 138
    invoke-direct {p0, v0, v1}, Lcom/qihoo360/loader2/PluginIntent;->getI(Ljava/lang/String;I)I

    move-result v0

    return v0
.end method

.method final setActivity(Ljava/lang/String;)V
    .locals 1

    const-string v0, "activity:"

    .line 134
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginIntent;->setS(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method final setContainer(Ljava/lang/String;)V
    .locals 1

    const-string v0, "container:"

    .line 150
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginIntent;->setS(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method final setCounter(I)V
    .locals 1

    const-string v0, "counter:"

    .line 158
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginIntent;->setI(Ljava/lang/String;I)V

    return-void
.end method

.method final setPlugin(Ljava/lang/String;)V
    .locals 1

    const-string v0, "plugin:"

    .line 126
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginIntent;->setS(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method final setProcess(I)V
    .locals 1

    const-string v0, "process:"

    .line 142
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/loader2/PluginIntent;->setI(Ljava/lang/String;I)V

    return-void
.end method
