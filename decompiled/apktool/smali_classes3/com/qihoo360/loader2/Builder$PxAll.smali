.class final Lcom/qihoo360/loader2/Builder$PxAll;
.super Ljava/lang/Object;
.source "Builder.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/Builder;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x18
    name = "PxAll"
.end annotation


# instance fields
.field private final all:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field

.field private final builtins:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field

.field private final normals:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field

.field private final others:Ljava/util/HashSet;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashSet<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field

.field private final v5:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>()V
    .locals 1

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 48
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->builtins:Ljava/util/ArrayList;

    .line 53
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->v5:Ljava/util/ArrayList;

    .line 58
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->normals:Ljava/util/ArrayList;

    .line 63
    new-instance v0, Ljava/util/HashSet;

    invoke-direct {v0}, Ljava/util/HashSet;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->others:Ljava/util/HashSet;

    .line 68
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->all:Ljava/util/ArrayList;

    return-void
.end method

.method private final getBuiltin(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 3

    .line 119
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->builtins:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 120
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private final getV5(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;
    .locals 3

    .line 132
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->v5:Ljava/util/ArrayList;

    invoke-virtual {v0}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 133
    invoke-virtual {v1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    return-object v1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method private final hasOlder(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;)Z
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ")Z"
        }
    .end annotation

    .line 104
    invoke-virtual {p1}, Ljava/util/ArrayList;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :cond_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 105
    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 106
    sget-object v1, Lcom/qihoo360/replugin/model/PluginInfo;->VERSION_COMPARATOR:Ljava/util/Comparator;

    invoke-interface {v1, v0, p2}, Ljava/util/Comparator;->compare(Ljava/lang/Object;Ljava/lang/Object;)I

    move-result v0

    if-gez v0, :cond_0

    const/4 p1, 0x1

    return p1

    :cond_1
    const/4 p1, 0x0

    return p1
.end method

.method private final insert(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            "Z)Z"
        }
    .end annotation

    const/4 v0, 0x0

    move v1, v0

    .line 78
    :goto_0
    invoke-virtual {p1}, Ljava/util/ArrayList;->size()I

    move-result v2

    const/4 v3, 0x1

    if-ge v1, v2, :cond_3

    .line 79
    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/qihoo360/replugin/model/PluginInfo;

    .line 81
    invoke-virtual {v2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p2}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v4, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_2

    if-eqz p3, :cond_0

    .line 84
    sget-object p3, Lcom/qihoo360/replugin/model/PluginInfo;->VERSION_COMPARATOR:Ljava/util/Comparator;

    invoke-interface {p3, v2, p2}, Ljava/util/Comparator;->compare(Ljava/lang/Object;Ljava/lang/Object;)I

    move-result p3

    if-lez p3, :cond_1

    return v0

    .line 88
    :cond_0
    sget-object p3, Lcom/qihoo360/replugin/model/PluginInfo;->VERSION_COMPARATOR:Ljava/util/Comparator;

    invoke-interface {p3, v2, p2}, Ljava/util/Comparator;->compare(Ljava/lang/Object;Ljava/lang/Object;)I

    move-result p3

    if-ltz p3, :cond_1

    return v0

    .line 93
    :cond_1
    iget-object p3, p0, Lcom/qihoo360/loader2/Builder$PxAll;->others:Ljava/util/HashSet;

    invoke-virtual {p1, v1}, Ljava/util/ArrayList;->get(I)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {p3, v0}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    .line 94
    invoke-virtual {p1, v1, p2}, Ljava/util/ArrayList;->set(ILjava/lang/Object;)Ljava/lang/Object;

    return v3

    :cond_2
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 99
    :cond_3
    invoke-virtual {p1, p2}, Ljava/util/ArrayList;->add(Ljava/lang/Object;)Z

    return v3
.end method


# virtual methods
.method final addBuiltin(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 158
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->builtins:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-direct {p0, v0, p1, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->insert(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z

    .line 159
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->all:Ljava/util/ArrayList;

    invoke-direct {p0, v0, p1, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->insert(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z

    return-void
.end method

.method final addNormal(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 6

    .line 179
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/Builder$PxAll;->getBuiltin(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    const-string v1, "ws001"

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersionValue()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersionValue()J

    move-result-wide v4

    cmp-long v0, v2, v4

    if-nez v0, :cond_0

    .line 180
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 181
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "builtin plugin: normal="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 183
    :cond_0
    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/qihoo360/loader2/Builder$PxAll;->getV5(Ljava/lang/String;)Lcom/qihoo360/replugin/model/PluginInfo;

    move-result-object v0

    if-eqz v0, :cond_2

    invoke-virtual {v0}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersionValue()J

    move-result-wide v2

    invoke-virtual {p1}, Lcom/qihoo360/replugin/model/PluginInfo;->getVersionValue()J

    move-result-wide v4

    cmp-long v0, v2, v4

    if-nez v0, :cond_2

    .line 184
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 185
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "v5 plugin: normal="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 192
    :cond_1
    :goto_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->normals:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-direct {p0, v0, p1, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->insert(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z

    return-void

    .line 188
    :cond_2
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->others:Ljava/util/HashSet;

    invoke-virtual {v0, p1}, Ljava/util/HashSet;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method final addV5(Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 2

    .line 166
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->all:Ljava/util/ArrayList;

    const/4 v1, 0x0

    invoke-direct {p0, v0, p1, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->insert(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    .line 169
    :cond_0
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->v5:Ljava/util/ArrayList;

    invoke-direct {p0, v0, p1, v1}, Lcom/qihoo360/loader2/Builder$PxAll;->insert(Ljava/util/ArrayList;Lcom/qihoo360/replugin/model/PluginInfo;Z)Z

    return-void
.end method

.method final getOthers()Ljava/util/HashSet;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashSet<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 144
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->others:Ljava/util/HashSet;

    return-object v0
.end method

.method final getPlugins()Ljava/util/ArrayList;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/model/PluginInfo;",
            ">;"
        }
    .end annotation

    .line 151
    iget-object v0, p0, Lcom/qihoo360/loader2/Builder$PxAll;->all:Ljava/util/ArrayList;

    return-object v0
.end method
