.class public Lcom/huawei/updatesdk/b/b/c;
.super Lcom/huawei/updatesdk/a/b/c/c/c;
.source ""


# instance fields
.field private brand:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private buildNumber:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private density:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private emuiApiLevel:I
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private firmwareVersion:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private manufacturer:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private phoneType:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private resolution:Ljava/lang/String;
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field

.field private ts:J
    .annotation runtime Lcom/huawei/updatesdk/service/appmgr/bean/SDKNetTransmission;
    .end annotation
.end field


# direct methods
.method public constructor <init>()V
    .locals 3

    invoke-direct {p0}, Lcom/huawei/updatesdk/a/b/c/c/c;-><init>()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/huawei/updatesdk/b/b/c;->emuiApiLevel:I

    invoke-static {}, Lcom/huawei/updatesdk/a/b/a/a;->c()Lcom/huawei/updatesdk/a/b/a/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/updatesdk/a/b/a/a;->a()Landroid/content/Context;

    move-result-object v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    iput-wide v1, p0, Lcom/huawei/updatesdk/b/b/c;->ts:J

    sget-object v1, Landroid/os/Build$VERSION;->RELEASE:Ljava/lang/String;

    invoke-virtual {v1}, Ljava/lang/String;->trim()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/huawei/updatesdk/b/b/c;->firmwareVersion:Ljava/lang/String;

    invoke-static {}, Lcom/huawei/updatesdk/a/a/d/h/c;->c()Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/huawei/updatesdk/b/b/c;->buildNumber:Ljava/lang/String;

    invoke-static {}, Lcom/huawei/updatesdk/b/c/b;->a()Lcom/huawei/updatesdk/b/c/c;

    move-result-object v1

    invoke-virtual {v1}, Lcom/huawei/updatesdk/b/c/c;->f()Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/huawei/updatesdk/b/b/c;->phoneType:Ljava/lang/String;

    invoke-static {v0}, Lcom/huawei/updatesdk/a/a/d/h/c;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v2

    iput-object v2, p0, Lcom/huawei/updatesdk/b/b/c;->density:Ljava/lang/String;

    invoke-static {v0}, Lcom/huawei/updatesdk/a/a/d/h/c;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/huawei/updatesdk/b/b/c;->resolution:Ljava/lang/String;

    invoke-static {}, Lcom/huawei/updatesdk/b/h/a;->d()Lcom/huawei/updatesdk/b/h/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/huawei/updatesdk/b/h/a;->a()I

    move-result v0

    iput v0, p0, Lcom/huawei/updatesdk/b/b/c;->emuiApiLevel:I

    invoke-virtual {v1}, Lcom/huawei/updatesdk/b/c/c;->e()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/huawei/updatesdk/b/b/c;->manufacturer:Ljava/lang/String;

    sget-object v0, Lcom/huawei/updatesdk/a/a/d/h/c;->c:Ljava/lang/String;

    iput-object v0, p0, Lcom/huawei/updatesdk/b/b/c;->brand:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " {\n\tmethod_: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/huawei/updatesdk/a/b/c/c/c;->b()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\n}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
