.class public final Lcom/qihoo360/i/Factory2;
.super Ljava/lang/Object;
.source "Factory2.java"


# static fields
.field public static sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 35
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static final createActivityContext(Landroid/app/Activity;Landroid/content/Context;)Landroid/content/Context;
    .locals 1

    .line 50
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->createActivityContext(Landroid/app/Activity;Landroid/content/Context;)Landroid/content/Context;

    move-result-object p0

    return-object p0
.end method

.method public static final fetchPlugins(Ljava/lang/String;)Lorg/json/JSONArray;
    .locals 1

    .line 169
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->fetchPlugins(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    return-object p0
.end method

.method public static final getPluginByDynamicClass(Ljava/lang/String;)Ljava/lang/String;
    .locals 1

    .line 220
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->getPluginByDynamicClass(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static final handleActivityCreate(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 1

    .line 70
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->handleActivityCreate(Landroid/app/Activity;Landroid/os/Bundle;)V

    return-void
.end method

.method public static final handleActivityCreateBefore(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 1

    .line 60
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->handleActivityCreateBefore(Landroid/app/Activity;Landroid/os/Bundle;)V

    return-void
.end method

.method public static final handleActivityDestroy(Landroid/app/Activity;)V
    .locals 1

    .line 79
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->handleActivityDestroy(Landroid/app/Activity;)V

    return-void
.end method

.method public static final handleRestoreInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 1

    .line 89
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->handleRestoreInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V

    return-void
.end method

.method public static final handleServiceCreate(Landroid/app/Service;)V
    .locals 1

    .line 98
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->handleServiceCreate(Landroid/app/Service;)V

    return-void
.end method

.method public static final handleServiceDestroy(Landroid/app/Service;)V
    .locals 1

    .line 107
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->handleServiceDestroy(Landroid/app/Service;)V

    return-void
.end method

.method public static final isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 205
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->isDynamicClass(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static final registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z
    .locals 1

    .line 194
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Class;)Z

    move-result p0

    return p0
.end method

.method public static final registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z
    .locals 1

    .line 182
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->registerDynamicClass(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method public static final startActivity(Landroid/app/Activity;Landroid/content/Intent;)Z
    .locals 1

    .line 131
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->startActivity(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0

    return p0
.end method

.method public static final startActivity(Landroid/content/Context;Landroid/content/Intent;)Z
    .locals 1

    .line 119
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->startActivity(Landroid/content/Context;Landroid/content/Intent;)Z

    move-result p0

    return p0
.end method

.method public static final startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;IZ)Z
    .locals 7

    .line 146
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    move-object v1, p0

    move-object v2, p1

    move-object v3, p2

    move-object v4, p3

    move v5, p4

    move v6, p5

    invoke-virtual/range {v0 .. v6}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->startActivity(Landroid/content/Context;Landroid/content/Intent;Ljava/lang/String;Ljava/lang/String;IZ)Z

    move-result p0

    return p0
.end method

.method public static final startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z
    .locals 1

    .line 159
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0, p1, p2, p3}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->startActivityForResult(Landroid/app/Activity;Landroid/content/Intent;ILandroid/os/Bundle;)Z

    move-result p0

    return p0
.end method

.method public static unregisterDynamicClass(Ljava/lang/String;)V
    .locals 1

    .line 209
    sget-object v0, Lcom/qihoo360/i/Factory2;->sPLProxy:Lcom/qihoo360/loader2/PluginLibraryInternalProxy;

    invoke-virtual {v0, p0}, Lcom/qihoo360/loader2/PluginLibraryInternalProxy;->unregisterDynamicClass(Ljava/lang/String;)V

    return-void
.end method
