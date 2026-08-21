.class public Lcom/bianfeng/pluginlibrary/RePluginSdk;
.super Ljava/lang/Object;
.source "RePluginSdk.java"


# static fields
.field private static pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 7
    new-instance v0, Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-direct {v0}, Lcom/bianfeng/pluginlibrary/RePluginInterface;-><init>()V

    sput-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 5
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static closePlugin(Ljava/lang/String;Z)V
    .locals 1

    .line 32
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/pluginlibrary/RePluginInterface;->closePlugin(Ljava/lang/String;Z)V

    return-void
.end method

.method public static invokeFuncNameandParameters(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 41
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-virtual {v0, p0, p1}, Lcom/bianfeng/pluginlibrary/RePluginInterface;->invokeFuncNameandParameters(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static mBindService(Ljava/lang/String;)V
    .locals 1

    .line 46
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-virtual {v0, p0}, Lcom/bianfeng/pluginlibrary/RePluginInterface;->mBindService(Ljava/lang/String;)V

    return-void
.end method

.method public static mUnBindService()V
    .locals 1

    .line 52
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-virtual {v0}, Lcom/bianfeng/pluginlibrary/RePluginInterface;->mUnBindService()V

    return-void
.end method

.method public static onCreate(Landroid/content/Context;)V
    .locals 1

    .line 22
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-virtual {v0, p0}, Lcom/bianfeng/pluginlibrary/RePluginInterface;->onCreate(Landroid/content/Context;)V

    return-void
.end method

.method public static postToSepperllita(Ljava/lang/String;)V
    .locals 1

    .line 57
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    invoke-virtual {v0, p0}, Lcom/bianfeng/pluginlibrary/RePluginInterface;->postToSepperllita(Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public getPluginInterface()Lcom/bianfeng/pluginlibrary/RePluginInterface;
    .locals 1

    .line 14
    sget-object v0, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    return-object v0
.end method

.method public setPluginInterface(Lcom/bianfeng/pluginlibrary/RePluginInterface;)V
    .locals 0

    .line 10
    sput-object p1, Lcom/bianfeng/pluginlibrary/RePluginSdk;->pluginInterface:Lcom/bianfeng/pluginlibrary/RePluginInterface;

    return-void
.end method
