.class public Lcom/bianfeng/seppellita/event/EventManager;
.super Ljava/lang/Object;
.source "EventManager.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 13
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static launch()V
    .locals 3

    const-string v0, "launch"

    .line 19
    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 20
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "act"

    const-string v2, "push"

    .line 21
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "pg"

    const-string v2, "P0010"

    .line 22
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "eid"

    const-string v2, "100"

    .line 23
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 24
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object v1

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/lang/String;)V

    return-void
.end method

.method public static onPause(Ljava/lang/String;)V
    .locals 3

    .line 31
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onPause--->"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "----"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaLogger;->i(Ljava/lang/String;)V

    .line 32
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    const-string v1, "act"

    const-string v2, "access"

    .line 33
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "pg"

    const-string v2, "P0100"

    .line 34
    invoke-interface {v0, v1, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string v1, "dur"

    .line 35
    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 36
    invoke-static {}, Lcom/bianfeng/seppellita/SepperllitaSdk;->getInstance()Lcom/bianfeng/seppellita/SepperllitaSdk;

    move-result-object p0

    invoke-static {v0}, Lcom/bianfeng/seppellita/utils/SeppellitaGsonUtils;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/seppellita/SepperllitaSdk;->post(Ljava/lang/String;)V

    return-void
.end method
