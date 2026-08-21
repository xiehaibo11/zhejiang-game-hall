.class public Lcom/qihoo360/replugin/component/ComponentList;
.super Ljava/lang/Object;
.source "ComponentList.java"


# instance fields
.field final mActivities:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ActivityInfo;",
            ">;"
        }
    .end annotation
.end field

.field mApplication:Landroid/content/pm/ApplicationInfo;

.field final mProvidersByAuthority:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ProviderInfo;",
            ">;"
        }
    .end annotation
.end field

.field final mProvidersByName:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ProviderInfo;",
            ">;"
        }
    .end annotation
.end field

.field final mReceivers:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ActivityInfo;",
            ">;"
        }
    .end annotation
.end field

.field final mServices:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ServiceInfo;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method public constructor <init>(Landroid/content/pm/PackageInfo;Ljava/lang/String;Lcom/qihoo360/replugin/model/PluginInfo;)V
    .locals 8

    .line 96
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 64
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mActivities:Ljava/util/HashMap;

    .line 69
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByName:Ljava/util/HashMap;

    .line 74
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByAuthority:Ljava/util/HashMap;

    .line 79
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mServices:Ljava/util/HashMap;

    const/4 v0, 0x0

    .line 84
    iput-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mApplication:Landroid/content/pm/ApplicationInfo;

    .line 90
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mReceivers:Ljava/util/HashMap;

    .line 97
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->activities:[Landroid/content/pm/ActivityInfo;

    const/4 v1, 0x0

    const-string v2, "ws001"

    if-eqz v0, :cond_3

    .line 98
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->activities:[Landroid/content/pm/ActivityInfo;

    array-length v3, v0

    move v4, v1

    :goto_0
    if-ge v4, v3, :cond_3

    aget-object v5, v0, v4

    .line 99
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_0

    .line 100
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "activity="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v5, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 102
    :cond_0
    iget-object v6, v5, Landroid/content/pm/ActivityInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iput-object p2, v6, Landroid/content/pm/ApplicationInfo;->sourceDir:Ljava/lang/String;

    .line 104
    iget-object v6, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-nez v6, :cond_1

    .line 105
    iget-object v6, v5, Landroid/content/pm/ActivityInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v6, v6, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    iput-object v6, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 107
    :cond_1
    iget-object v6, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-nez v6, :cond_2

    .line 108
    iget-object v6, v5, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    iput-object v6, v5, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 110
    :cond_2
    iget-object v6, p0, Lcom/qihoo360/replugin/component/ComponentList;->mActivities:Ljava/util/HashMap;

    iget-object v7, v5, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {v6, v7, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    .line 113
    :cond_3
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    if-eqz v0, :cond_7

    .line 114
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->providers:[Landroid/content/pm/ProviderInfo;

    array-length v3, v0

    move v4, v1

    :goto_1
    if-ge v4, v3, :cond_7

    aget-object v5, v0, v4

    .line 115
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_4

    .line 116
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "provider="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v5, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v7, "; auth="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v5, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 118
    :cond_4
    iget-object v6, v5, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    if-nez v6, :cond_5

    .line 119
    iget-object v6, v5, Landroid/content/pm/ProviderInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v6, v6, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    iput-object v6, v5, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    .line 121
    :cond_5
    iget-object v6, v5, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    if-nez v6, :cond_6

    .line 122
    iget-object v6, v5, Landroid/content/pm/ProviderInfo;->packageName:Ljava/lang/String;

    iput-object v6, v5, Landroid/content/pm/ProviderInfo;->processName:Ljava/lang/String;

    .line 124
    :cond_6
    iget-object v6, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByName:Ljava/util/HashMap;

    iget-object v7, v5, Landroid/content/pm/ProviderInfo;->name:Ljava/lang/String;

    invoke-virtual {v6, v7, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 125
    iget-object v6, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByAuthority:Ljava/util/HashMap;

    iget-object v7, v5, Landroid/content/pm/ProviderInfo;->authority:Ljava/lang/String;

    invoke-virtual {v6, v7, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v4, v4, 0x1

    goto :goto_1

    .line 128
    :cond_7
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->services:[Landroid/content/pm/ServiceInfo;

    if-eqz v0, :cond_b

    .line 129
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->services:[Landroid/content/pm/ServiceInfo;

    array-length v3, v0

    move v4, v1

    :goto_2
    if-ge v4, v3, :cond_b

    aget-object v5, v0, v4

    .line 130
    sget-boolean v6, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v6, :cond_8

    .line 131
    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "service="

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v7, v5, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v2, v6}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 133
    :cond_8
    iget-object v6, v5, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    if-nez v6, :cond_9

    .line 134
    iget-object v6, v5, Landroid/content/pm/ServiceInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v6, v6, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    iput-object v6, v5, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    .line 136
    :cond_9
    iget-object v6, v5, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    if-nez v6, :cond_a

    .line 137
    iget-object v6, v5, Landroid/content/pm/ServiceInfo;->packageName:Ljava/lang/String;

    iput-object v6, v5, Landroid/content/pm/ServiceInfo;->processName:Ljava/lang/String;

    .line 139
    :cond_a
    iget-object v6, p0, Lcom/qihoo360/replugin/component/ComponentList;->mServices:Ljava/util/HashMap;

    iget-object v7, v5, Landroid/content/pm/ServiceInfo;->name:Ljava/lang/String;

    invoke-virtual {v6, v7, v5}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v4, v4, 0x1

    goto :goto_2

    .line 142
    :cond_b
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->receivers:[Landroid/content/pm/ActivityInfo;

    if-eqz v0, :cond_f

    .line 143
    iget-object v0, p1, Landroid/content/pm/PackageInfo;->receivers:[Landroid/content/pm/ActivityInfo;

    array-length v3, v0

    :goto_3
    if-ge v1, v3, :cond_f

    aget-object v4, v0, v1

    .line 144
    sget-boolean v5, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v5, :cond_c

    .line 145
    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "receiver="

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, v4, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v2, v5}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 147
    :cond_c
    iget-object v5, v4, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-nez v5, :cond_d

    .line 148
    iget-object v5, v4, Landroid/content/pm/ActivityInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iget-object v5, v5, Landroid/content/pm/ApplicationInfo;->processName:Ljava/lang/String;

    iput-object v5, v4, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 150
    :cond_d
    iget-object v5, v4, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    if-nez v5, :cond_e

    .line 151
    iget-object v5, v4, Landroid/content/pm/ActivityInfo;->packageName:Ljava/lang/String;

    iput-object v5, v4, Landroid/content/pm/ActivityInfo;->processName:Ljava/lang/String;

    .line 153
    :cond_e
    iget-object v5, p0, Lcom/qihoo360/replugin/component/ComponentList;->mReceivers:Ljava/util/HashMap;

    iget-object v6, v4, Landroid/content/pm/ActivityInfo;->name:Ljava/lang/String;

    invoke-virtual {v5, v6, v4}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    add-int/lit8 v1, v1, 0x1

    goto :goto_3

    .line 158
    :cond_f
    invoke-static {p2}, Lcom/qihoo360/replugin/component/ComponentList;->getManifestFromApk(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 160
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_10

    .line 161
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "\n\u89e3\u6790\u63d2\u4ef6 "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p3}, Lcom/qihoo360/replugin/model/PluginInfo;->getName()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, " : "

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p2, "\nAndroidManifest: \n"

    invoke-virtual {v1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 165
    :cond_10
    sget-object p2, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-virtual {p2, p3, v0}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->parse(Lcom/qihoo360/replugin/model/PluginInfo;Ljava/lang/String;)V

    .line 167
    iget-object p1, p1, Landroid/content/pm/PackageInfo;->applicationInfo:Landroid/content/pm/ApplicationInfo;

    iput-object p1, p0, Lcom/qihoo360/replugin/component/ComponentList;->mApplication:Landroid/content/pm/ApplicationInfo;

    .line 169
    iget-object p1, p1, Landroid/content/pm/ApplicationInfo;->dataDir:Ljava/lang/String;

    if-nez p1, :cond_11

    .line 170
    iget-object p1, p0, Lcom/qihoo360/replugin/component/ComponentList;->mApplication:Landroid/content/pm/ApplicationInfo;

    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getDataDirectory()Ljava/io/File;

    move-result-object p3

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    sget-object p3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p3, "data"

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object p3, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p3, p0, Lcom/qihoo360/replugin/component/ComponentList;->mApplication:Landroid/content/pm/ApplicationInfo;

    iget-object p3, p3, Landroid/content/pm/ApplicationInfo;->packageName:Ljava/lang/String;

    invoke-virtual {p2, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    iput-object p2, p1, Landroid/content/pm/ApplicationInfo;->dataDir:Ljava/lang/String;

    .line 173
    :cond_11
    sget-boolean p1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p1, :cond_12

    .line 174
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string p2, "mApplication: "

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object p2, p0, Lcom/qihoo360/replugin/component/ComponentList;->mApplication:Landroid/content/pm/ApplicationInfo;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v2, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_12
    return-void
.end method

.method private static getManifestFromApk(Ljava/lang/String;)Ljava/lang/String;
    .locals 8

    .line 187
    invoke-static {p0}, Lcom/qihoo360/replugin/component/utils/ApkCommentReader;->readComment(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 188
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const-string v2, "ws001"

    if-nez v1, :cond_1

    .line 189
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_0

    .line 190
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u4ece apk comment \u4e2d\u89e3\u6790 xml:\n "

    invoke-virtual {p0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v2, p0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    return-object v0

    :cond_1
    const/4 v0, 0x0

    .line 198
    :try_start_0
    new-instance v1, Lcom/qihoo360/replugin/ext/parser/ApkParser;

    invoke-direct {v1, p0}, Lcom/qihoo360/replugin/ext/parser/ApkParser;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/io/IOException; {:try_start_0 .. :try_end_0} :catch_2
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    .line 199
    :try_start_1
    sget-boolean p0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz p0, :cond_2

    .line 200
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    .line 201
    invoke-virtual {v1}, Lcom/qihoo360/replugin/ext/parser/ApkParser;->getManifestXml()Ljava/lang/String;

    move-result-object p0

    .line 202
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v5

    .line 203
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v7, "\u4ece apk \u4e2d\u89e3\u6790 xml \u8017\u65f6 "

    invoke-virtual {v0, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sub-long/2addr v5, v3

    invoke-virtual {v0, v5, v6}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v3, " \u6beb\u79d2"

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v2, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_0

    .line 205
    :cond_2
    invoke-virtual {v1}, Lcom/qihoo360/replugin/ext/parser/ApkParser;->getManifestXml()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/io/IOException; {:try_start_1 .. :try_end_1} :catch_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 214
    :goto_0
    :try_start_2
    invoke-virtual {v1}, Lcom/qihoo360/replugin/ext/parser/ApkParser;->close()V
    :try_end_2
    .catch Ljava/io/IOException; {:try_start_2 .. :try_end_2} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    .line 216
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    :goto_1
    return-object p0

    :catchall_0
    move-exception p0

    move-object v0, v1

    goto :goto_4

    :catch_1
    move-exception p0

    move-object v0, v1

    goto :goto_2

    :catchall_1
    move-exception p0

    goto :goto_4

    :catch_2
    move-exception p0

    .line 210
    :goto_2
    :try_start_3
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    if-eqz v0, :cond_3

    .line 214
    :try_start_4
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/ApkParser;->close()V
    :try_end_4
    .catch Ljava/io/IOException; {:try_start_4 .. :try_end_4} :catch_3

    goto :goto_3

    :catch_3
    move-exception p0

    .line 216
    invoke-virtual {p0}, Ljava/io/IOException;->printStackTrace()V

    :cond_3
    :goto_3
    const-string p0, ""

    return-object p0

    :goto_4
    if-eqz v0, :cond_4

    .line 214
    :try_start_5
    invoke-virtual {v0}, Lcom/qihoo360/replugin/ext/parser/ApkParser;->close()V
    :try_end_5
    .catch Ljava/io/IOException; {:try_start_5 .. :try_end_5} :catch_4

    goto :goto_5

    :catch_4
    move-exception v0

    .line 216
    invoke-virtual {v0}, Ljava/io/IOException;->printStackTrace()V

    .line 217
    :cond_4
    :goto_5
    throw p0
.end method


# virtual methods
.method public getActivities()[Landroid/content/pm/ActivityInfo;
    .locals 2

    .line 248
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mActivities:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Landroid/content/pm/ActivityInfo;

    invoke-interface {v0, v1}, Ljava/util/Collection;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Landroid/content/pm/ActivityInfo;

    return-object v0
.end method

.method public getActivity(Ljava/lang/String;)Landroid/content/pm/ActivityInfo;
    .locals 1

    .line 241
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mActivities:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ActivityInfo;

    return-object p1
.end method

.method public getActivityMap()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ActivityInfo;",
            ">;"
        }
    .end annotation

    .line 328
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mActivities:Ljava/util/HashMap;

    return-object v0
.end method

.method public getApplication()Landroid/content/pm/ApplicationInfo;
    .locals 1

    .line 321
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mApplication:Landroid/content/pm/ApplicationInfo;

    return-object v0
.end method

.method public getProvider(Ljava/lang/String;)Landroid/content/pm/ProviderInfo;
    .locals 1

    .line 300
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByName:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ProviderInfo;

    return-object p1
.end method

.method public getProviderByAuthority(Ljava/lang/String;)Landroid/content/pm/ProviderInfo;
    .locals 1

    .line 307
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByAuthority:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ProviderInfo;

    return-object p1
.end method

.method public getProviderMap()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ProviderInfo;",
            ">;"
        }
    .end annotation

    .line 349
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByAuthority:Ljava/util/HashMap;

    return-object v0
.end method

.method public getProviders()[Landroid/content/pm/ProviderInfo;
    .locals 2

    .line 314
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mProvidersByName:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Landroid/content/pm/ProviderInfo;

    invoke-interface {v0, v1}, Ljava/util/Collection;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Landroid/content/pm/ProviderInfo;

    return-object v0
.end method

.method public getReceiverMap()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ActivityInfo;",
            ">;"
        }
    .end annotation

    .line 342
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mReceivers:Ljava/util/HashMap;

    return-object v0
.end method

.method public getReceivers()[Landroid/content/pm/ActivityInfo;
    .locals 2

    .line 262
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mReceivers:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Landroid/content/pm/ActivityInfo;

    invoke-interface {v0, v1}, Ljava/util/Collection;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Landroid/content/pm/ActivityInfo;

    return-object v0
.end method

.method public getReveiver(Ljava/lang/String;)Landroid/content/pm/ActivityInfo;
    .locals 1

    .line 255
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mReceivers:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ActivityInfo;

    return-object p1
.end method

.method public getService(Ljava/lang/String;)Landroid/content/pm/ServiceInfo;
    .locals 1

    .line 227
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mServices:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/content/pm/ServiceInfo;

    return-object p1
.end method

.method public getServiceAndPluginByIntent(Landroid/content/Context;Landroid/content/Intent;)Landroid/util/Pair;
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/content/Context;",
            "Landroid/content/Intent;",
            ")",
            "Landroid/util/Pair<",
            "Landroid/content/pm/ServiceInfo;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 276
    invoke-virtual {p2}, Landroid/content/Intent;->getAction()Ljava/lang/String;

    move-result-object v0

    .line 277
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    .line 278
    sget-object v1, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-virtual {v1, v0}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->getPluginsByActionWhenStartService(Ljava/lang/String;)Ljava/util/Set;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 281
    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_1

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    .line 283
    sget-object v2, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->INS:Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;

    invoke-virtual {v2, v1}, Lcom/qihoo360/mobilesafe/parser/manifest/ManifestParser;->getServiceFilterMap(Ljava/lang/String;)Ljava/util/Map;

    move-result-object v2

    .line 285
    invoke-static {p1, p2, v2}, Lcom/qihoo360/replugin/component/utils/IntentMatcherHelper;->doMatchIntent(Landroid/content/Context;Landroid/content/Intent;Ljava/util/Map;)Ljava/lang/String;

    move-result-object v2

    .line 286
    invoke-static {v1, v2}, Lcom/qihoo360/i/Factory;->queryServiceInfo(Ljava/lang/String;Ljava/lang/String;)Landroid/content/pm/ServiceInfo;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 288
    new-instance p1, Landroid/util/Pair;

    invoke-direct {p1, v2, v1}, Landroid/util/Pair;-><init>(Ljava/lang/Object;Ljava/lang/Object;)V

    return-object p1

    :cond_1
    const/4 p1, 0x0

    return-object p1
.end method

.method public getServiceMap()Ljava/util/HashMap;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Landroid/content/pm/ServiceInfo;",
            ">;"
        }
    .end annotation

    .line 335
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mServices:Ljava/util/HashMap;

    return-object v0
.end method

.method public getServices()[Landroid/content/pm/ServiceInfo;
    .locals 2

    .line 234
    iget-object v0, p0, Lcom/qihoo360/replugin/component/ComponentList;->mServices:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->values()Ljava/util/Collection;

    move-result-object v0

    const/4 v1, 0x0

    new-array v1, v1, [Landroid/content/pm/ServiceInfo;

    invoke-interface {v0, v1}, Ljava/util/Collection;->toArray([Ljava/lang/Object;)[Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Landroid/content/pm/ServiceInfo;

    return-object v0
.end method
