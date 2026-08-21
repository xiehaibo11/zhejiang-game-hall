.class public final Lcom/kwad/components/offline/tk/b/a;
.super Ljava/lang/Object;


# static fields
.field private static final ZU:Ljava/lang/String;

.field private static final ZV:Ljava/lang/String;

.field private static final ZW:Ljava/lang/String;

.field private static final ZX:Ljava/lang/String;

.field private static final ZY:Ljava/lang/String;

.field private static final ZZ:Ljava/lang/String;

.field private static final Zm:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private static final Zn:Ljava/lang/String;

.field private static aaa:J

.field private static aab:Ljava/lang/Boolean;


# direct methods
.method static constructor <clinit>()V
    .locals 5

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/components/offline/tk/b/a;->Zm:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v0, 0x1

    new-array v2, v0, [Ljava/lang/Object;

    const-string v3, "tk_runtime_v0_0_38"

    aput-object v3, v2, v1

    const-string v3, "lib%s.so"

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/kwad/components/offline/tk/b/a;->ZU:Ljava/lang/String;

    new-array v2, v0, [Ljava/lang/Object;

    const-string v4, "tk_runtime_lite_v0_0_38"

    aput-object v4, v2, v1

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/kwad/components/offline/tk/b/a;->ZV:Ljava/lang/String;

    new-array v2, v0, [Ljava/lang/Object;

    const-string v4, "kwai-v8"

    aput-object v4, v2, v1

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/kwad/components/offline/tk/b/a;->ZW:Ljava/lang/String;

    new-array v2, v0, [Ljava/lang/Object;

    const-string v4, "kwai-v8-lite"

    aput-object v4, v2, v1

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/kwad/components/offline/tk/b/a;->ZX:Ljava/lang/String;

    new-array v2, v0, [Ljava/lang/Object;

    const-string v4, "kwad-fb"

    aput-object v4, v2, v1

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/kwad/components/offline/tk/b/a;->ZY:Ljava/lang/String;

    new-array v2, v0, [Ljava/lang/Object;

    const-string v4, "kwad-yoga"

    aput-object v4, v2, v1

    invoke-static {v3, v2}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    sput-object v2, Lcom/kwad/components/offline/tk/b/a;->ZZ:Ljava/lang/String;

    new-array v0, v0, [Ljava/lang/Object;

    const-string v2, "c++_shared"

    aput-object v2, v0, v1

    invoke-static {v3, v0}, Lcom/kwad/sdk/utils/aa;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/offline/tk/b/a;->Zn:Ljava/lang/String;

    const/4 v0, 0x0

    sput-object v0, Lcom/kwad/components/offline/tk/b/a;->aab:Ljava/lang/Boolean;

    return-void
.end method

.method static synthetic F(J)J
    .locals 0

    sput-wide p0, Lcom/kwad/components/offline/tk/b/a;->aaa:J

    return-wide p0
.end method

.method public static a(Landroid/content/Context;Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;)V
    .locals 8

    sget-object v0, Lcom/kwad/components/offline/tk/b/a;->Zm:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    sget-object v0, Lcom/kwad/components/offline/tk/b/a;->Zm:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {}, Lcom/kwad/components/offline/tk/b/a;->useTkLite()Z

    move-result v2

    invoke-static {p0}, Lcom/kwad/sdk/utils/AbiUtil;->isArm64(Landroid/content/Context;)Z

    move-result v3

    if-eqz v3, :cond_6

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zg()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_1

    goto :goto_0

    :cond_1
    if-eqz v2, :cond_2

    const-string v3, "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaLiteSoArm64v8aRelease-3.3.34.apk"

    goto :goto_0

    :cond_2
    const-string v3, "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaSoArm64v8aRelease-3.3.34.apk"

    :goto_0
    if-eqz v2, :cond_3

    const-string v4, "sotk-v8a-lite"

    goto :goto_1

    :cond_3
    const-string v4, "sotk-v8a"

    :goto_1
    if-eqz v2, :cond_4

    const-string v5, "39df505f83794e951720e9c753824d0c"

    goto :goto_2

    :cond_4
    const-string v5, "2c0fb7069df4a3e6fd55e417229bcb6b"

    :goto_2
    if-eqz v2, :cond_5

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZV:Ljava/lang/String;

    const-string v7, "a5009e795307441cc05dbd3e8aeaead3"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZX:Ljava/lang/String;

    const-string v7, "77545ba1892c1a1d4a039db37b3249eb"

    goto :goto_3

    :cond_5
    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZU:Ljava/lang/String;

    const-string v7, "e1478b9b4f377d667c7e510e88ae1bcb"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZW:Ljava/lang/String;

    const-string v7, "7316cd8d074b04e6cb21486288d314ce"

    :goto_3
    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZY:Ljava/lang/String;

    const-string v7, "31f065607e6da6b741330d1df0b35460"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZZ:Ljava/lang/String;

    const-string v7, "76308532f64b68fd5a930c42cceec22b"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->Zn:Ljava/lang/String;

    const-string v7, "6ca7958ee0b0192a7c52c16faffaa8ba"

    goto :goto_8

    :cond_6
    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zf()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_7

    goto :goto_4

    :cond_7
    if-eqz v2, :cond_8

    const-string v3, "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaLiteSoArmeabiv7aRelease-3.3.34.apk"

    goto :goto_4

    :cond_8
    const-string v3, "https://static.yximgs.com/udata/pkg/KS-Android-KSAdSDk/tachikoma/3.3.34/ks_so-tachikomaSoArmeabiv7aRelease-3.3.34.apk"

    :goto_4
    if-eqz v2, :cond_9

    const-string v4, "sotk-v7a-lite"

    goto :goto_5

    :cond_9
    const-string v4, "sotk-v7a"

    :goto_5
    if-eqz v2, :cond_a

    const-string v5, "a46a370ee3a1a61a0d6041b3c69c0ab7"

    goto :goto_6

    :cond_a
    const-string v5, "f8d270613187202ab45cfec0dca9deee"

    :goto_6
    if-eqz v2, :cond_b

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZV:Ljava/lang/String;

    const-string v7, "8ffd76abe9e5fe33f4035b56b9d6e8e3"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZX:Ljava/lang/String;

    const-string v7, "2dbd72527a0739740746adaae48ed2e0"

    goto :goto_7

    :cond_b
    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZU:Ljava/lang/String;

    const-string v7, "55e6b8f6cd2091d8f8412dafcf9f381a"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZW:Ljava/lang/String;

    const-string v7, "519ba633e88efafb8fbd536d800da734"

    :goto_7
    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZY:Ljava/lang/String;

    const-string v7, "eff11bebb8a3c872fa30b0484b460d12"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->ZZ:Ljava/lang/String;

    const-string v7, "2c6f402c6a565d2e6912b0013fa59380"

    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v6, Lcom/kwad/components/offline/tk/b/a;->Zn:Ljava/lang/String;

    const-string v7, "7cb16c2840085bbdf4be628e6604bac1"

    :goto_8
    invoke-virtual {v0, v6, v7}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    new-instance v6, Lcom/kwad/library/solder/lib/c/b;

    invoke-direct {v6}, Lcom/kwad/library/solder/lib/c/b;-><init>()V

    invoke-static {}, Lcom/kwad/sdk/core/network/idc/a;->Bo()Lcom/kwad/sdk/core/network/idc/a;

    move-result-object v7

    invoke-virtual {v7, v3}, Lcom/kwad/sdk/core/network/idc/a;->dc(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v6, Lcom/kwad/library/solder/lib/c/b;->agz:Ljava/lang/String;

    iput-boolean v1, v6, Lcom/kwad/library/solder/lib/c/b;->IH:Z

    iput-object v4, v6, Lcom/kwad/library/solder/lib/c/b;->agy:Ljava/lang/String;

    if-eqz v2, :cond_c

    const-string v1, "3.3.34-lite"

    goto :goto_9

    :cond_c
    const-string v1, "3.3.34"

    :goto_9
    iput-object v1, v6, Lcom/kwad/library/solder/lib/c/b;->version:Ljava/lang/String;

    const/4 v1, 0x0

    iput-boolean v1, v6, Lcom/kwad/library/solder/lib/c/b;->agC:Z

    iput-object v5, v6, Lcom/kwad/library/solder/lib/c/b;->agB:Ljava/lang/String;

    iput-object v0, v6, Lcom/kwad/library/solder/lib/c/b;->agE:Ljava/util/HashMap;

    const-string v0, "com.kwad.components.tachikoma"

    invoke-static {p0, v0}, Lcom/kwad/library/solder/a/a;->h(Landroid/content/Context;Ljava/lang/String;)Lcom/kwad/library/solder/lib/a/a;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "tkOfflineCompoPlugin: "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "TkSoLoadHelper"

    invoke-static {v2, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    instance-of v1, v0, Lcom/kwad/library/b/a;

    if-eqz v1, :cond_d

    move-object v1, v0

    check-cast v1, Lcom/kwad/library/b/a;

    invoke-virtual {v1}, Lcom/kwad/library/b/a;->vV()Lcom/kwad/library/b/a/b;

    move-result-object v1

    iput-object v1, v6, Lcom/kwad/library/solder/lib/c/b;->agH:Ljava/lang/ClassLoader;

    :cond_d
    new-instance v1, Lcom/kwad/components/offline/tk/b/a$1;

    invoke-direct {v1, v0, p1}, Lcom/kwad/components/offline/tk/b/a$1;-><init>(Lcom/kwad/library/solder/lib/a/a;Lcom/kwad/components/offline/api/core/soloader/SoLoadListener;)V

    invoke-static {p0, v6, v1}, Lcom/kwad/library/solder/a/a;->a(Landroid/content/Context;Lcom/kwad/library/solder/lib/c/b;Lcom/kwad/library/solder/lib/ext/b$c;)V

    return-void
.end method

.method static synthetic sN()J
    .locals 2

    sget-wide v0, Lcom/kwad/components/offline/tk/b/a;->aaa:J

    return-wide v0
.end method

.method public static useTkLite()Z
    .locals 1

    sget-object v0, Lcom/kwad/components/offline/tk/b/a;->aab:Ljava/lang/Boolean;

    if-nez v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akI:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    xor-int/lit8 v0, v0, 0x1

    invoke-static {v0}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v0

    sput-object v0, Lcom/kwad/components/offline/tk/b/a;->aab:Ljava/lang/Boolean;

    :cond_0
    sget-object v0, Lcom/kwad/components/offline/tk/b/a;->aab:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method
