.class public Lcom/bianfeng/privategetui/PushTag;
.super Lcom/igexin/sdk/Tag;
.source "PushTag.java"


# static fields
.field private static final serialVersionUID:J = 0x1L


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 11
    invoke-direct {p0}, Lcom/igexin/sdk/Tag;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;)V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/igexin/sdk/Tag;-><init>()V

    .line 16
    invoke-virtual {p0, p1}, Lcom/bianfeng/privategetui/PushTag;->setName(Ljava/lang/String;)Lcom/igexin/sdk/Tag;

    return-void
.end method

.method public static createPushTags()[Lcom/igexin/sdk/Tag;
    .locals 4

    const/4 v0, 0x4

    new-array v0, v0, [Lcom/igexin/sdk/Tag;

    .line 20
    new-instance v1, Lcom/bianfeng/privategetui/PushTag;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "AID"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 21
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getSdkAppId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/privategetui/PushTag;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x0

    aput-object v1, v0, v2

    new-instance v1, Lcom/bianfeng/privategetui/PushTag;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "CID"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 22
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/privategetui/PushTag;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x1

    aput-object v1, v0, v2

    new-instance v1, Lcom/bianfeng/privategetui/PushTag;

    .line 23
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getPkgName()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/privategetui/PushTag;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x2

    aput-object v1, v0, v2

    new-instance v1, Lcom/bianfeng/privategetui/PushTag;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    .line 24
    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getSdkAppId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "&"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/bianfeng/platform/executor/AppConfig;->getChannelId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/bianfeng/privategetui/PushTag;-><init>(Ljava/lang/String;)V

    const/4 v2, 0x3

    aput-object v1, v0, v2

    return-object v0
.end method
