.class Lcom/qihoo360/replugin/component/service/server/ProcessRecord;
.super Ljava/lang/Object;
.source "ProcessRecord.java"


# instance fields
.field final client:Landroid/os/Messenger;

.field final connections:Ljava/util/ArrayList;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/ArrayList<",
            "Lcom/qihoo360/replugin/component/service/server/ConnectionBindRecord;",
            ">;"
        }
    .end annotation
.end field

.field final pid:I

.field private stringName:Ljava/lang/String;


# direct methods
.method constructor <init>(ILandroid/os/Messenger;)V
    .locals 1

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 39
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->connections:Ljava/util/ArrayList;

    .line 44
    iput p1, p0, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->pid:I

    .line 45
    iput-object p2, p0, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->client:Landroid/os/Messenger;

    return-void
.end method


# virtual methods
.method public toString()Ljava/lang/String;
    .locals 2

    .line 49
    iget-object v0, p0, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->stringName:Ljava/lang/String;

    if-eqz v0, :cond_0

    return-object v0

    .line 52
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    const/16 v1, 0x80

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(I)V

    const-string v1, "ProcessRecord{"

    .line 53
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 54
    invoke-static {p0}, Ljava/lang/System;->identityHashCode(Ljava/lang/Object;)I

    move-result v1

    invoke-static {v1}, Ljava/lang/Integer;->toHexString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " p"

    .line 55
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 56
    iget v1, p0, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->pid:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const/16 v1, 0x7d

    .line 57
    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(C)Ljava/lang/StringBuilder;

    .line 58
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/qihoo360/replugin/component/service/server/ProcessRecord;->stringName:Ljava/lang/String;

    return-object v0
.end method
