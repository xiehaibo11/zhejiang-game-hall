#if (MAX_DIRECTIONAL_LIGHT_NUM > 0)
    uniform vec3 u_DirLightSourceDirection[MAX_DIRECTIONAL_LIGHT_NUM];
#endif
#if (MAX_POINT_LIGHT_NUM > 0)
    uniform vec3 u_PointLightSourcePosition[MAX_POINT_LIGHT_NUM];
    uniform float u_PointLightSourceRangeInverse[MAX_POINT_LIGHT_NUM];
#endif
#if (MAX_SPOT_LIGHT_NUM > 0)
    uniform vec3 u_SpotLightSourcePosition[MAX_SPOT_LIGHT_NUM];
    uniform vec3 u_SpotLightSourceDirection[MAX_SPOT_LIGHT_NUM];
    uniform float u_SpotLightSourceInnerAngleCos[MAX_SPOT_LIGHT_NUM];
    uniform float u_SpotLightSourceOuterAngleCos[MAX_SPOT_LIGHT_NUM];
    uniform float u_SpotLightSourceRangeInverse[MAX_SPOT_LIGHT_NUM];
#endif

uniform mat4 u_models[30];
uniform mat3 u_nMats[30];
uniform vec3 u_viewPos;

attribute vec4 a_position;
attribute vec2 a_texCoord;
attribute vec3 a_normal;
attribute float a_id;
attribute vec4 a_alpha;

varying vec2 TextureCoordOut;
varying vec3 viewDirection;
varying vec4 v_alpha;

#if (MAX_DIRECTIONAL_LIGHT_NUM > 0)
    varying vec3 dirLightDirection[MAX_DIRECTIONAL_LIGHT_NUM];
#endif
#if (MAX_POINT_LIGHT_NUM > 0)
    varying vec3 pointLightDirection[MAX_POINT_LIGHT_NUM];
    varying float pointLightAttenuation[MAX_POINT_LIGHT_NUM];
#endif
#if (MAX_SPOT_LIGHT_NUM > 0)
    varying vec3 vertexToSpotLightDirection[MAX_SPOT_LIGHT_NUM];
    varying float spotLightAttenuation[MAX_SPOT_LIGHT_NUM];
#endif

#if ((MAX_DIRECTIONAL_LIGHT_NUM > 0) || (MAX_POINT_LIGHT_NUM > 0) || (MAX_SPOT_LIGHT_NUM > 0))
    varying vec3 v_normal;
#endif

float clampAB(float a, float A, float B)
{
    #ifdef INTERNAL_CLAMP
        return clamp(a, A, B);
    #else
        return min(max(a, A), B);
    #endif
}

float clamp01(float a)
{
    #ifdef INTERNAL_CLAMP
        return clamp(a, 0.0, 1.0);
    #else
        return clampAB(a, 0.0, 1.0);
    #endif
}

void main(void)
{
    int index = int(a_id);
    v_alpha = a_alpha;
    
    mat3 normalMatrix = u_nMats[index];
    vec3 viewPosition = vec3(0,u_viewPos.y,u_viewPos.z);
    vec4 ePosition = u_models[index] * a_position;
    vec3 v_viewDirection = viewPosition - ePosition.xyz / ePosition.w;
  
    viewDirection = normalize(v_viewDirection * 2.0);
    #if (MAX_DIRECTIONAL_LIGHT_NUM > 1)
        for (int i = 0; i < MAX_DIRECTIONAL_LIGHT_NUM; ++i)
        {
            dirLightDirection[i] = -normalize(u_DirLightSourceDirection[i] * 2.0);
        }
    #endif
    #if (MAX_DIRECTIONAL_LIGHT_NUM ==1)
        dirLightDirection[0] = -normalize(u_DirLightSourceDirection[0] * 2.0);
    #endif

    #if (MAX_POINT_LIGHT_NUM > 1)
        for (int i = 0; i < MAX_POINT_LIGHT_NUM; ++i)
        {
            pointLightDirection[i] = u_PointLightSourcePosition[i].xyz - ePosition.xyz;
            pointLightDirection[i] = normalize(pointLightDirection[i] * 2.0);
            vec3 ldir = pointLightDirection[i] * u_PointLightSourceRangeInverse[i];
            pointLightAttenuation[i] = clamp01(1.0 - dot(ldir, ldir));
        }
    #endif
    #if (MAX_POINT_LIGHT_NUM ==1)
        pointLightDirection[0] = u_PointLightSourcePosition[0].xyz - ePosition.xyz;
        pointLightDirection[0] = normalize(pointLightDirection[0] * 2.0);
        vec3 ldir = pointLightDirection[0] * u_PointLightSourceRangeInverse[0];
        pointLightAttenuation[0] = clamp01(1.0 - dot(ldir, ldir));
    #endif

    #if (MAX_SPOT_LIGHT_NUM > 1)
        for (int i = 0; i < MAX_SPOT_LIGHT_NUM; ++i)
        {
            vec3 v_vertexToSpotLightDirection = u_SpotLightSourcePosition[i] - ePosition.xyz;
            
            vec3 spotLightDirection = normalize(u_SpotLightSourceDirection[i] * 2.0);
            
            vec3 ldir = v_vertexToSpotLightDirection * u_SpotLightSourceRangeInverse[i];
            spotLightAttenuation[i] = clamp01(1.0 - dot(ldir, ldir));
            vertexToSpotLightDirection[i] = normalize(v_vertexToSpotLightDirection);
            float spotCurrentAngleCos = dot(spotLightDirection, -vertexToSpotLightDirection[i]);
            
            spotLightAttenuation[i] *= smoothstep(u_SpotLightSourceOuterAngleCos[i], u_SpotLightSourceInnerAngleCos[i], spotCurrentAngleCos);
            spotLightAttenuation[i] = clamp01(spotLightAttenuation[i]);
        }
    #endif
    #if (MAX_SPOT_LIGHT_NUM == 1)
        vec3 v_vertexToSpotLightDirection = u_SpotLightSourcePosition[0] - ePosition.xyz;
        vec3 spotLightDirection = normalize(u_SpotLightSourceDirection[0] * 2.0);
        vec3 spotldir = v_vertexToSpotLightDirection * u_SpotLightSourceRangeInverse[0];
        spotLightAttenuation[0] = clamp01(1.0 - dot(spotldir, spotldir));
        vertexToSpotLightDirection[0] = normalize(v_vertexToSpotLightDirection);
        float spotCurrentAngleCos = dot(spotLightDirection, -vertexToSpotLightDirection[0]);
        
        spotLightAttenuation[0] *= smoothstep(u_SpotLightSourceOuterAngleCos[0], u_SpotLightSourceInnerAngleCos[0], spotCurrentAngleCos);
        spotLightAttenuation[0] = clamp01(spotLightAttenuation[0]);
    #endif

    #if ((MAX_DIRECTIONAL_LIGHT_NUM > 0) || (MAX_POINT_LIGHT_NUM > 0) || (MAX_SPOT_LIGHT_NUM > 0))
        v_normal = normalMatrix * a_normal;
    #endif
    
    TextureCoordOut = a_texCoord;
    TextureCoordOut.y = 1.0 - TextureCoordOut.y;
    gl_Position = CC_PMatrix * ePosition;
}
