.class public Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;
.super Ljava/lang/Object;
.source "PluginProviderHelper.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;
    }
.end annotation


# static fields
.field private static final SCHEME_AND_SSP:Ljava/lang/String; = "content://"

.field private static final TAG:Ljava/lang/String; = "PluginProviderHelper"


# instance fields
.field private final mAuthority:Ljava/lang/String;

.field mProviderAuthorityMap:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Landroid/content/ContentProvider;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method constructor <init>(Ljava/lang/String;)V
    .locals 1

    .line 46
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 50
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mProviderAuthorityMap:Ljava/util/Map;

    .line 47
    iput-object p1, p0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mAuthority:Ljava/lang/String;

    return-void
.end method

.method private installProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;Ljava/lang/String;)Landroid/content/ContentProvider;
    .locals 4

    .line 141
    iget-object v0, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->plugin:Ljava/lang/String;

    invoke-static {v0}, Lcom/qihoo360/i/Factory;->queryPluginComponentList(Ljava/lang/String;)Lcom/qihoo360/replugin/component/ComponentList;

    move-result-object v0

    const-string v1, "PluginProviderHelper"

    const/4 v2, 0x0

    if-nez v0, :cond_1

    .line 143
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_0

    .line 144
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "installProvider(): Fetch Component List Error! auth="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v2

    .line 148
    :cond_1
    invoke-virtual {v0, p2}, Lcom/qihoo360/replugin/component/ComponentList;->getProviderByAuthority(Ljava/lang/String;)Landroid/content/pm/ProviderInfo;

    move-result-object v0

    if-nez v0, :cond_3

    .line 150
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_2

    .line 151
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "installProvider(): Not register! auth="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_2
    return-object v2

    .line 157
    :cond_3
    iget-object p1, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->plugin:Ljava/lang/String;

    invoke-static {p1}, Lcom/qihoo360/i/Factory;->queryPluginContext(Ljava/lang/String;)Landroid/content/Context;

    move-result-object p1

    if-nez p1, :cond_5

    .line 159
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_4

    .line 160
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "installProvider(): Fetch Context Error! auth="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_4
    return-object v2

    .line 164
    :cond_5
    invoke-virtual {p1}, Landroid/content/Context;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object p2

    if-nez p2, :cond_7

    .line 166
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_6

    const-string p1, "installProvider(): ClassLoader is Null!"

    .line 167
    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_6
    return-object v2

    .line 173
    :cond_7
    :try_start_0
    iget-object v3, v0, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    invoke-virtual {p2, v3}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p2

    invoke-virtual {p2}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/content/ContentProvider;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 183
    :try_start_1
    invoke-virtual {p2, p1, v0}, Landroid/content/ContentProvider;->attachInfo(Landroid/content/Context;Landroid/content/pm/ProviderInfo;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    return-object p2

    :catchall_0
    move-exception p1

    .line 189
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_8

    const-string p2, "installProvider(): Attach info fail!"

    .line 190
    invoke-static {v1, p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_8
    return-object v2

    :catchall_1
    move-exception p1

    .line 175
    sget-boolean p2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p2, :cond_9

    const-string p2, "installProvider(): New instance fail!"

    .line 176
    invoke-static {v1, p2, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)I

    :cond_9
    return-object v2
.end method

.method private removeHostAuthorityAndInfo(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
    .locals 2

    .line 135
    iget-object v0, p0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mAuthority:Ljava/lang/String;

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v1, 0xa

    add-int/2addr v1, v0

    add-int/lit8 v1, v1, 0x1

    invoke-virtual {p2}, Ljava/lang/String;->length()I

    move-result p2

    add-int/2addr v1, p2

    add-int/lit8 v1, v1, 0x1

    .line 136
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "content://"

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/String;->length()I

    move-result v0

    invoke-virtual {p1, v1, v0}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method


# virtual methods
.method public getProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;)Landroid/content/ContentProvider;
    .locals 4

    .line 100
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "PluginProviderHelper"

    if-eqz v0, :cond_0

    .line 101
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "getProvider(): Start... pu="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 104
    :cond_0
    iget-object v0, p1, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    invoke-virtual {v0}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object v0

    .line 107
    iget-object v2, p0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mProviderAuthorityMap:Ljava/util/Map;

    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Landroid/content/ContentProvider;

    if-eqz v2, :cond_2

    .line 109
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_1

    .line 110
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "getProvider(): Exists! Return now. cp="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v2

    .line 116
    :cond_2
    invoke-direct {p0, p1, v0}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->installProvider(Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;Ljava/lang/String;)Landroid/content/ContentProvider;

    move-result-object v2

    if-nez v2, :cond_4

    .line 118
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_3

    const-string p1, "getProvider(): Install fail!"

    .line 119
    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    const/4 p1, 0x0

    return-object p1

    .line 125
    :cond_4
    iget-object v3, p0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mProviderAuthorityMap:Ljava/util/Map;

    invoke-interface {v3, v0, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 127
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_5

    .line 128
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "getProvider(): Okay! pu="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string p1, "; cp="

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v2
.end method

.method public toPluginUri(Landroid/net/Uri;)Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;
    .locals 5

    .line 56
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    const-string v1, "PluginProviderHelper"

    if-eqz v0, :cond_0

    .line 57
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "toPluginUri(): Start... Uri="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 60
    :cond_0
    invoke-virtual {p1}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object v0

    iget-object v2, p0, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->mAuthority:Ljava/lang/String;

    invoke-static {v0, v2}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v2, 0x0

    if-nez v0, :cond_2

    .line 61
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_1

    .line 62
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "toPluginUri(): Authority error! auth="

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Landroid/net/Uri;->getAuthority()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    return-object v2

    .line 67
    :cond_2
    invoke-virtual {p1}, Landroid/net/Uri;->getPathSegments()Ljava/util/List;

    move-result-object v0

    .line 68
    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v3

    const/4 v4, 0x2

    if-ge v3, v4, :cond_4

    .line 69
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_3

    .line 70
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "toPluginUri(): Less than 2 fragments, size="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_3
    return-object v2

    :cond_4
    const/4 v3, 0x0

    .line 76
    invoke-interface {v0, v3}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 79
    invoke-static {v0}, Lcom/qihoo360/replugin/RePlugin;->isPluginInstalled(Ljava/lang/String;)Z

    move-result v3

    if-nez v3, :cond_6

    .line 80
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_5

    .line 81
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "toPluginUri(): Plugin not exists! pn="

    invoke-virtual {p1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_5
    return-object v2

    .line 87
    :cond_6
    invoke-virtual {p1}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p1

    .line 88
    invoke-direct {p0, p1, v0}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper;->removeHostAuthorityAndInfo(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    .line 90
    new-instance v2, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;

    invoke-direct {v2}, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;-><init>()V

    .line 91
    iput-object v0, v2, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->plugin:Ljava/lang/String;

    .line 92
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    iput-object p1, v2, Lcom/qihoo360/replugin/component/provider/PluginProviderHelper$PluginUri;->transferredUri:Landroid/net/Uri;

    .line 93
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_7

    .line 94
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "toPluginUri(): End! t-uri="

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v1, p1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :cond_7
    return-object v2
.end method
