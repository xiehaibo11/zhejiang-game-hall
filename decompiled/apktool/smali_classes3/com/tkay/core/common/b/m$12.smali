.class final Lcom/tkay/core/common/b/m$12;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/b/m;->b(Landroid/content/Context;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Landroid/content/Context;

.field final synthetic b:Lcom/tkay/core/common/b/m;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/b/m;Landroid/content/Context;)V
    .locals 0

    .line 1160
    iput-object p1, p0, Lcom/tkay/core/common/b/m$12;->b:Lcom/tkay/core/common/b/m;

    iput-object p2, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 15

    const-string v0, "********************************** Network Integration Status *************************************"

    const/4 v1, 0x1

    const/4 v2, 0x0

    .line 1169
    :try_start_0
    const-class v3, Landroid/support/v4/content/LocalBroadcastManager;

    invoke-virtual {v3}, Ljava/lang/Class;->getName()Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v3, v1

    goto :goto_0

    :catchall_0
    move v3, v2

    .line 1174
    :goto_0
    :try_start_1
    const-class v4, Landroidx/localbroadcastmanager/content/LocalBroadcastManager;

    invoke-virtual {v4}, Ljava/lang/Class;->getName()Ljava/lang/String;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    move v3, v1

    :catchall_1
    const-string v4, "tkay"

    if-nez v3, :cond_0

    :try_start_2
    const-string v3, "Missing: LocalBroadcastManager"

    .line 1180
    invoke-static {v4, v3}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 1184
    :cond_0
    new-instance v3, Ljava/util/ArrayList;

    invoke-direct {v3}, Ljava/util/ArrayList;-><init>()V

    const-string v5, "com.tkay.network"

    .line 1186
    new-instance v6, Ldalvik/system/DexFile;

    iget-object v7, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v7}, Landroid/content/Context;->getPackageCodePath()Ljava/lang/String;

    move-result-object v7

    invoke-direct {v6, v7}, Ldalvik/system/DexFile;-><init>(Ljava/lang/String;)V

    .line 1187
    invoke-virtual {v6}, Ldalvik/system/DexFile;->entries()Ljava/util/Enumeration;

    move-result-object v6

    .line 1188
    :cond_1
    :goto_1
    invoke-interface {v6}, Ljava/util/Enumeration;->hasMoreElements()Z

    move-result v7

    if-eqz v7, :cond_2

    .line 1189
    invoke-interface {v6}, Ljava/util/Enumeration;->nextElement()Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/lang/String;

    .line 1191
    invoke-virtual {v7, v5}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_1

    const-string v8, "InitManager"

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-eqz v8, :cond_1

    const-string v8, "$"

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v8

    if-nez v8, :cond_1

    .line 1192
    invoke-interface {v3, v7}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    .line 1196
    :cond_2
    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1197
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v5
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    const-string v6, "----------------------------------------"

    if-eqz v5, :cond_3

    .line 1198
    :try_start_3
    invoke-static {v4, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1200
    :cond_3
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v3

    :catchall_2
    :cond_4
    :goto_2
    invoke-interface {v3}, Ljava/util/Iterator;->hasNext()Z

    move-result v5

    if-eqz v5, :cond_9

    invoke-interface {v3}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Ljava/lang/String;
    :try_end_3
    .catch Ljava/lang/Exception; {:try_start_3 .. :try_end_3} :catch_0

    .line 1202
    :try_start_4
    invoke-static {v5}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v5

    const-string v7, "getInstance"

    new-array v8, v2, [Ljava/lang/Class;

    .line 1203
    invoke-virtual {v5, v7, v8}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v7
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    const/4 v8, 0x0

    :try_start_5
    new-array v9, v2, [Ljava/lang/Object;

    .line 1206
    invoke-virtual {v7, v8, v9}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    goto :goto_3

    .line 1208
    :catchall_3
    :try_start_6
    new-instance v7, Ljava/lang/StringBuilder;

    const-string v9, "Cannot instantiate "

    invoke-direct {v7, v9}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v5}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ", please check if a third-party SDK is imported"

    invoke-virtual {v7, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v7}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 1209
    invoke-static {v4, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    :goto_3
    if-eqz v8, :cond_4

    .line 1212
    instance-of v5, v8, Lcom/tkay/core/api/TYInitMediation;

    if-eqz v5, :cond_4

    .line 1214
    check-cast v8, Lcom/tkay/core/api/TYInitMediation;

    .line 1215
    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getNetworkName()Ljava/lang/String;

    move-result-object v5

    .line 1216
    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v7

    if-eqz v7, :cond_5

    goto :goto_2

    .line 1220
    :cond_5
    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getNetworkVersion()Ljava/lang/String;

    move-result-object v7

    .line 1221
    invoke-static {v7}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    const-string v10, "NetworkName: "

    if-nez v9, :cond_6

    .line 1222
    :try_start_7
    new-instance v9, Ljava/lang/StringBuilder;

    invoke-direct {v9, v10}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, "  (v"

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v5, ")"

    invoke-virtual {v9, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v9}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_4

    .line 1224
    :cond_6
    invoke-static {v5}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {v10, v5}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v5

    invoke-static {v4, v5}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 1226
    :goto_4
    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getNetworkSDKClass()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Lcom/tkay/core/common/b/m;->h(Ljava/lang/String;)Z

    move-result v5

    .line 1227
    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getPluginClassStatus()Ljava/util/Map;

    move-result-object v7

    invoke-static {v7}, Lcom/tkay/core/common/b/m;->b(Ljava/util/Map;)Z

    move-result v7

    .line 1228
    iget-object v9, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getActivityStatus()Ljava/util/List;

    move-result-object v10

    invoke-static {v9, v10}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/util/List;)Z

    move-result v9

    .line 1229
    iget-object v10, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getServiceStatus()Ljava/util/List;

    move-result-object v11

    invoke-static {v10, v11}, Lcom/tkay/core/common/b/m;->b(Landroid/content/Context;Ljava/util/List;)Z

    move-result v10

    .line 1230
    iget-object v11, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getProviderStatus()Ljava/util/List;

    move-result-object v12

    invoke-static {v11, v12}, Lcom/tkay/core/common/b/m;->c(Landroid/content/Context;Ljava/util/List;)Z

    move-result v11

    .line 1231
    iget-object v12, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getMetaValutStatus()Ljava/util/List;

    move-result-object v13

    invoke-static {v12, v13}, Lcom/tkay/core/common/b/m;->d(Landroid/content/Context;Ljava/util/List;)Z

    move-result v12

    .line 1232
    iget-object v13, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getPermissionStatus()Ljava/util/List;

    move-result-object v14

    invoke-static {v13, v14}, Lcom/tkay/core/common/b/m;->e(Landroid/content/Context;Ljava/util/List;)Z

    move-result v13

    .line 1233
    iget-object v14, p0, Lcom/tkay/core/common/b/m$12;->a:Landroid/content/Context;

    invoke-virtual {v8}, Lcom/tkay/core/api/TYInitMediation;->getResourceStatus()Ljava/util/List;

    move-result-object v8

    invoke-static {v14, v8, v2}, Lcom/tkay/core/common/b/m;->a(Landroid/content/Context;Ljava/util/List;Z)Z

    move-result v8

    if-eqz v5, :cond_7

    if-eqz v7, :cond_7

    if-eqz v9, :cond_7

    if-eqz v10, :cond_7

    if-eqz v11, :cond_7

    if-eqz v12, :cond_7

    if-eqz v13, :cond_7

    if-eqz v8, :cond_7

    move v5, v1

    goto :goto_5

    :cond_7
    move v5, v2

    :goto_5
    if-eqz v5, :cond_8

    const-string v5, "Status: Success"

    .line 1238
    invoke-static {v4, v5}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    goto :goto_6

    :cond_8
    const-string v5, "Status: Fail"

    .line 1240
    invoke-static {v4, v5}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 1244
    :goto_6
    invoke-static {v4, v6}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_2

    goto/16 :goto_2

    .line 1251
    :cond_9
    :try_start_8
    invoke-static {v4, v0}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_8
    .catch Ljava/lang/Exception; {:try_start_8 .. :try_end_8} :catch_0

    :catch_0
    return-void
.end method
